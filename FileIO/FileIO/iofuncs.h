#pragma once

void writeTo(const char* fileName, const char* msg);

void encrtyptMsg(const char* fileName, const char* msg);

void reverseTxt(const char* fileName);

void showOnC(const char* fileName);

int countWords(const char* fileName);

void sortEntireFile(const char* fileName, const char* out = "");

void fileTo2DArr(const char* sourceFile, char** dest);

void removeSymbols(char* word);

int sum(int* arr, int sz);