#include <iostream>

#include "iofuncs.h"
#include "HangMan.h"

HangMan::HangMan(const char* fileName, int maxTries) : _maxTries(maxTries), _wc(countWords(fileName))
{
	_words = new char* [_wc];

	fileTo2DArr(fileName, _words);

	chooseWord();
	_guessArr = new int[strlen(_currWord)]{ 0 };
}

HangMan::~HangMan()
{
	for (int i = 0; i < _wc; i++) {
		delete[] _words[i];
	}
	delete[] _words;
	delete[] _guessArr;
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
	int i = getLetterIndex(letter);
	
	while (i >= 0) {
		_guessArr[i] = 1;
		i = getLetterIndex(letter);
	}
}

int HangMan::getLetterIndex(char ch) const
{
	int i = 0;

	while (_currWord[i] != '\0') {
		if (_currWord[i] == ch && _guessArr[i] != 1) {
			break;
		}
		i++;
	}

	if (i == strlen(_currWord)) {
		i = -1;
	}

	return i;
}

void HangMan::chooseWord()
{
	srand(time(0));
	_currWord = _words[rand() % _wc];
	toLower(_currWord);
}

void HangMan::printState() const
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

bool HangMan::checkWinning() const 
{
	return sum(_guessArr, strlen(_currWord)) == strlen(_currWord);
}

void HangMan::play()
{
	bool won = false;
	char* chs = new char[31];

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

	delete[] chs;
}
