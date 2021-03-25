#pragma once

class Card {
private:
	const char* bookName;
	const char* author;
	unsigned count;

public:

	Card();
	Card(const char*, const char*, unsigned);
	~Card();
	int print() const;
};