#pragma once

class Dictionary {
private:
	static const unsigned MAX_DICT_LENGHT = 100;
	static const unsigned WORDS_IN_PAIR = 2;

	unsigned wordPairCount;
	const char* wordPairArr[MAX_DICT_LENGHT][WORDS_IN_PAIR];

public:
	Dictionary();
	Dictionary(unsigned);
	~Dictionary();

	int initWordPairs();
	int fillWordParis();
	int addWordPair(char*, char*);
	int removeWordPair(char*);
	int findWord(char*) const;
	int translateWord(char*) const;
};