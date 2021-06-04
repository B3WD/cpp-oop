#include <iostream>

#include "iofuncs.h"
#include "HangMan.h"

HangMan::HangMan(const char* fileName, int maxTries) : _maxTries(maxTries), _wc(countWords(fileName))
{
	_words = new char* [_wc];
	_guessArr = nullptr;

	fileTo2DArr(fileName, _words);
}

HangMan::~HangMan()
{
	for (int i = 0; i < _wc; i++) {
		delete[] _words[i];
	}
	delete _words;
	//delete[] _guessArr;  //for some reason, this pointer cannot be deleted..??
}

void HangMan::loadWords(const char* fileName)
{
}

bool HangMan::guessWord(const char* word)
{
	return false;
}

void HangMan::guessLetter(char letter)
{
	int i;
	do {
		i = getLetterIndex(letter);
		_guessArr[i] = 1;

	} while (i >= 0);
}

int HangMan::getLetterIndex(char ch)
{
	int i = 0;
	char curCh;

	do {
		curCh = _currWord[i];
		if (curCh == ch && _guessArr[i] != 1) {
			break;
		}
		i++;
	} while (curCh != '\0');

	if (i == strlen(_currWord) + 1) {
		i = -1;
	}

	return i;
}

void HangMan::chooseWord()
{
	srand(time(0));
	_currWord = _words[rand() % _wc];
}

void HangMan::printState()
{
	int i = 0;
	char ch;

	do {
		ch = _currWord[i];
		if (_guessArr[i] == 0) {
			std::cout << "_ ";
		}else{
			std::cout << ch << " ";
		}
		i++;

	} while (ch != '\0');
}

bool HangMan::checkWinning() {

	return sum(_guessArr, strlen(_currWord)) == strlen(_currWord);
}

void HangMan::play()
{
	bool won = false;
	char* chs = new char[31];
	chooseWord();

	_guessArr = new int[strlen(_currWord)]{ 0 };

	for (int i = 0; i < _maxTries; i++) {
		// std::cout << "Cheat active. Word is: " << _currWord << "\n";
		std::cout << "Current state: ";
		printState();
		std::cout << "\nYou have " << _maxTries - i << " guesses left.\n";
		std::cout << "Check for: ";
		std::cin >> chs;

		if (strlen(chs) > 1) {
			if (!strcmp(_currWord, chs)) {
				won = true;
			}
			else {
				won = false;
			}
			break;
		} else if (getLetterIndex(chs[0]) >= 0) {
			std::cout << chs[0] << " is a right guess! :)\n";
			guessLetter(chs[0]);
			if (checkWinning()) {
				won = true;
				break;
			}
		}else {
			std::cout << chs[0] << " is NOT in the word.\n";
		}
		std::cout << "\n";
	}

	if (won) {
		std::cout << "You guessed the word: " << _currWord << "\n";
	}
	else {
		std::cout << "You lost. Word: " << _currWord << "\n";
	}
	
}
