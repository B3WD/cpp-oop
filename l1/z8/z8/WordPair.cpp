#include "WordPair.h"
#include <cstring>


WordPair::WordPair() {
	_word1 = new char[2];
	strcpy_s(_word1, 1, "");

	_word2 = new char[2];
	strcpy_s(_word2, 1, "");
}

WordPair::WordPair(const char* word1, const char* word2) {
	_word1 = new char[strlen(word1) + 1];
	strcpy_s(_word1, strlen(word1) + 1, word1);

	_word2 = new char[strlen(word2) + 1];
	strcpy_s(_word2, strlen(word2) + 1, word2);
}

WordPair::~WordPair() {
	if (_word1 != nullptr) {
		delete[] _word1;
		_word1 = nullptr;
	}

	if (_word2 != nullptr) {
		delete[] _word2;
		_word2 = nullptr;
	}
}