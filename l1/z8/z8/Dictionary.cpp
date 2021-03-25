#include "Dictionary.h"
#include <iostream>

Dictionary::Dictionary() : wordPairCount(0)
{
	initWordPairs();
}

Dictionary::Dictionary(unsigned wordPairCount) : wordPairCount(wordPairCount)
{
	initWordPairs();

	for
}

Dictionary::~Dictionary()
{
}

int Dictionary::initWordPairs()
{	
	for (int i = 0; i < MAX_DICT_LENGHT; i++) {
		for (int j = 0; j < WORDS_IN_PAIR; j++) {
			wordPairArr[i][j] = "\0";
		}
	}
	return 0;
}

int Dictionary::fillWordParis()
{
	for (int i = 0; i < wordPairCount; i++) {
		for (int j = 0; j < WORDS_IN_PAIR; j++) {
			std::cin >> wordPairArr[i][j];
		}
	}

	return 0;
}

int Dictionary::addWordPair(char*, char*)
{
	wordPairArr[wordPairCount];


	return 0;
}

int Dictionary::removeWordPair(char*)
{
	return 0;
}

int Dictionary::findWord(char*) const
{
	return 0;
}

int Dictionary::translateWord(char*) const
{
	return 0;
}
