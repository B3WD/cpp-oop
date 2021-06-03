#include <iostream>
#include "iofuncs.h"
#include <fstream>

void writeTo(const char* fileName, const char* msg)
{
	std::ofstream ofs(fileName);
	ofs.write(msg, strlen(msg));
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

void reverseTxt(const char* fileName)
{
	char msg[1000];
	char tmp;
	int sz;

	std::ifstream ifs(fileName);
	ifs.getline(msg, 1000);
	ifs.close();
	sz = strlen(msg);

	for (int i = 0; i < sz / 2; i++) {
		tmp = msg[i];
		msg[i] = msg[(sz - 1) - i];
		msg[(sz - 1) - i] = tmp;
	}

	writeTo(fileName, msg);
}

void showOnC(const char* fileName)
{
	char msg[1000];
	std::ifstream ifs(fileName);

	ifs.getline(msg, 1000);
	std::cout << msg;
}
