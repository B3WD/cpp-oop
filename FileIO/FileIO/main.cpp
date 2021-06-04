#include <iostream>
#include <fstream>
#include "iofuncs.h"

void t1() {
	char fileName[20] = { "Hello.txt" };
	char msg[20];

	std::ofstream ofs(fileName);

	ofs << "Hello, world!";
	ofs.close();

	std::ifstream ifs(fileName);
	ifs.getline(msg, 20);

	std::cout << msg;

	ifs.close();
}

void t2() {
	char fileName[20] = { "Hello.txt" };
	char msg[20];

	std::ifstream ifs(fileName);
	ifs.getline(msg, 20);

	std::cout << msg;

	ifs.close();
}

void t3() {
	char fileName[20] = { "Hello.txt" };
	char msg[20] = {"Hello, world."};

	std::ofstream ofs(fileName);
	ofs.close();

	std::ifstream ifs(fileName);

	// writing in files opened for reading
	// is not possible.
	// msg >> ifs;  

	ifs.close();
}

void t4() {
	char fileName[20] = { "Hello.txt" };
	double pi;

	std::ofstream ofs(fileName);

	ofs << "3.14";
	ofs.close();

	std::ifstream ifs(fileName);
	ifs >> pi;

	std::cout << pi;

	ifs.close();
}

void t5() {
	encrtyptMsg("Secret.txt", "Hello, world!");
	showOnC("Secret.txt");
}

void t6() {
	char fileName[20] = { "Text2.txt" };
	char msg[30] = { "This is a msg to reverse! :)" };

	writeTo(fileName, msg);
	reverseTxt(fileName);
	showOnC(fileName);
}

void t7() {
	char fileName[20] = { "EnglishText.txt" };
	sortEntireFile(fileName, "EnglishSorted.txt");
}

int main() {

	//t1();

	// reading from a file that does not exist,
	// does noet yield any characters.
	//t2();

	//t3();
	//t4();
	//t5();
	//t6();
	t7();

	return 0;
}