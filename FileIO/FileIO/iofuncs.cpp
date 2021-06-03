#include <iostream>
#include "iofuncs.h"
#include <fstream>

void writeTo(const char* fileName, const char* msg)
{
	std::ofstream ofs(fileName);
	ofs << msg;
	ofs.close();
}

void encrtyptMsg(const char* fileName,  const char* msg)
{
	char* encMsg = new char[strlen(msg) + 1];
	strcpy(encMsg, msg);

	int i = 0;
	do {
		encMsg[i]++;
		i++;
	} while (msg[i]!='\0');

	writeTo(fileName, encMsg);

	delete[] encMsg;
}

void showOnC(const char* fileName)
{
	char msg[20];
	std::ifstream ifs(fileName);

	ifs >> msg;
	std::cout << msg;
}
