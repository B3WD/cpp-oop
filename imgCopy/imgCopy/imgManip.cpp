#include "imgManip.h"
#include <fstream>
#include <iostream>

void addToPixel(char pixel[3], int rgb[3]) {
	const int sz = 3;
	for (int i = 0; i < sz; i++) {
		pixel[i] += rgb[i];
		if (pixel[i] > 255) {
			pixel[i] = 255;
		}
	}
}

void applyTint(const char* source, const char* dest, int rgb[3])
{
	const int sz = 3, metasz = 18;
	char pixel[sz], metadata[18];
	uint16_t w, h;

	std::ifstream ifs(source, std::ios::binary | std::ios::in);
	if (!ifs) {
		std::cerr << "Could not open input file!\n";
	}

	std::ofstream ofs(dest, std::ios::binary | std::ios::out);
	if (!ofs) {
		std::cerr << "Could not open output file!\n";
	}

	ifs.read(metadata, metasz);
	ofs.write(metadata, metasz);

	ifs.seekg(12, std::ios::beg);
	ifs.read((char*)&w, sizeof(uint16_t));
	ifs.read((char*)&h, sizeof(uint16_t));

	ifs.seekg(18, std::ios::beg);

	for (int m = 0; m < h; m++) {
		for (int n = 0; n < w; n++) {
			ifs.read(pixel, sz);

			/*std::cout << "curr " << int(pixel[0]) << " " << int(pixel[1]) << " " << int(pixel[2]) 
				<< " g: " << ifs.tellg() << "\n";*/

			addToPixel(pixel, rgb);

			/*std::cout << "new " << int(pixel[0]) << " " << int(pixel[1]) << " " << int(pixel[2])
				<< " p: " << ofs.tellp() << "\n";*/

			ofs.write(pixel, sz);
		}
	}
}

//void applyTint(const char* source, int rgb[3])
//{
//	const int sz = 3;
//	uint16_t w, h;
//	char pixel[sz];
//
//	std::fstream fs(source, std::ios::binary | std::ios::in | std::ios::out);
//
//	if (!fs) {
//		std::cerr << "Could not open!\n";
//	}
//
//	fs.seekg(12, std::ios::beg);
//
//	fs.read((char*)&w, sizeof(uint16_t));
//	fs.read((char*)&h, sizeof(uint16_t));
//
//	fs.seekg(18, std::ios::beg);
//
//	for (int m = 0; m < h; m++) {
//		for (int n = 0; n < w; n++) {
//
//			fs.read(pixel, sz);
//			
//			std::cout << "curr " << int(pixel[0]) << " " << int(pixel[1]) << " " << int(pixel[2]) 
//				<< " p: " << fs.tellp() << " g: " << fs.tellg() << "\n";
//			
//
//			addToPixel(pixel, rgb);
//			//pixel[2] = 0.9;
//
//			fs.seekp(-3, std::ios::cur);
//
//			
//			std::cout << "new " << int(pixel[0]) << " " << int(pixel[1]) << " " << int(pixel[2])
//				<< " p: " << fs.tellp() << " g: " << fs.tellg() << "\n";
//			
//			
//			fs.write(pixel, sz);
//		}
//	}
//}
