#include "imgCopy.h"

#include <fstream>

void cpyImg(const char* source, const char* dest)
{
	std::ifstream ifs(source, std::ios::binary | std::ios::in);
	std::ofstream ofs(dest, std::ios::binary | std::ios::out);

	ofs << ifs.rdbuf();
}
