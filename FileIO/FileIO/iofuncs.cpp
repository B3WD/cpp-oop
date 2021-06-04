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

int countWords(const char* fileName)
{
	char fileContents[10000]{ 0 };
	int i = 0, cnt = 0;
	bool foundWord = false;
	char ch;

	std::ifstream ifs(fileName);
	ifs.getline(fileContents, 10000, EOF);
	ifs.close();

	do {
		ch = fileContents[i];
		// std::cout << ch;
		if ((ch != ' ' || ch != '\n') && !foundWord) {
			foundWord = true;
			cnt++;
		} else if(ch == ' ') {
			foundWord = false;
		}

		i++;
	} while (ch != '\0');

	return cnt;
}

void sortEntireFile(const char* in, const char* out)
{
	const int maxL = 10000, 
			  asciiL = 256, 
		      l = 32,  
		      r = 127;
	int letterCounts[asciiL] = { 0 };
	char* loadedFile = new char[maxL] { 0 };
	char* sortedFile = new char[maxL] { 0 };
	int i = 0, k = 0, repeats;

	if (out == "") {
		out = in;
	}

	std::ifstream ifs(in);
	ifs.getline(loadedFile, maxL, EOF);
	ifs.close();


	while (loadedFile[i] > EOF) {
		letterCounts[loadedFile[i]]++;
		i++;
	}

	
	for (int i = l; i < r; i++) {
		repeats = letterCounts[i];
		for (int j = 0; j < repeats; j++) {
			sortedFile[k] = i;
			k++;
		}
	}

	writeTo(out, sortedFile);
	delete[] loadedFile;
	delete[] sortedFile;
}

void fileTo2DArr(const char* sourceFile, char* *dest)
{
	const int maxL = 10000;
	char* fileContents = new char[maxL];
	char tmpWordStrg[31]{ 0 };
	char ch;
	int i = 0;

	std::ifstream ifs(sourceFile);

	do {
		ifs >> tmpWordStrg;
		removeSymbols(tmpWordStrg);

		dest[i] = new char[strlen(tmpWordStrg) + 1];
		strcpy(dest[i], tmpWordStrg);

		i++;
	} while (!ifs.eof()); 

	ifs.close();
}

void removeSymbols(char* word)
{
	int i = 0, j = 0;
	char ch;

	do {
		ch = word[i];
		if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z')) {
			word[j] = ch;
			j++;
		}
		i++;

	} while (ch != '\0');
	word[j] = '\0';
}

int sum(int* arr, int sz)
{
	int sum = 0;
	
	for (int i = 0; i < sz; i++) {
		sum += arr[i];
	}

	return sum;
}
