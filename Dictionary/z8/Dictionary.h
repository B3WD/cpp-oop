#pragma once

class Dictionary {
private:
	unsigned wordPairCount;
	const char*** wordPairArr;

public:
	Dictionary();
	Dictionary(unsigned _wordPairCount);
	~Dictionary();

	void addWordPair(char* w1, char* w2);
};