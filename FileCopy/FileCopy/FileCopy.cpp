#include "FileCopy.h"
#include <fstream>

void copyFile(const char* source, const char* dest)
{
	std::ifstream ifs(source);
	std::ofstream ofs(dest);

	ofs << ifs.rdbuf();
}
