#pragma once

class WordPair {
private:
	char* _word1;
	char* _word2;

public:
	WordPair();
	WordPair(const char* word1, const char* word2);
	~WordPair();

	char* getW1() const { return _word1; }
	char* getW2() const { return _word2; }

};