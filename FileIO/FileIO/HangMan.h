#pragma once

class HangMan {
private:
	char** _words;
	char* _currWord;
	int* _guessArr;
	int _maxTries, _wc ,_tries = 0;

public:
	HangMan(const char* fileName = "", int maxTries = 10);
	~HangMan();

	void loadWords(const char* fileName = "");
	int getLetterIndex(char ch);
	bool guessWord(const char* word);
	void guessLetter(char letter);
	bool checkWinning();
	void printState();
	void chooseWord();
	void play();
};