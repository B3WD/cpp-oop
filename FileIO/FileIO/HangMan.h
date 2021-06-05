#pragma once

/*
TODO:

1. Difficulty settings:
	- more guesses
	- starting with some letters revealed
	- longer words

2. Two word combos.

*/

class HangMan {
private:
	char** _words;
	char* _currWord;
	int* _guessArr;
	int _maxTries, _wc ,_tries = 0;

public:
	HangMan(const char* fileName = "", int maxTries = 10);
	~HangMan();

	int getLetterIndex(char ch) const;
	bool checkWinning() const;
	void printState() const;

	void loadWords(const char* fileName = "");
	bool guessWord(const char* word);
	void guessLetter(char letter);
	void chooseWord();
	void play();
};