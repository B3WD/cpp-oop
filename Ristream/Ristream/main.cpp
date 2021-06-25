#include <iostream>
#include "Ristream.h"
#include "Ristream2.h"

void t1() {
	const int sz = 20;
	char msg[sz + 1], msg2[sz + 1];

	std::cout << "Random chars: " << Ristream(20) << "\n";

	// The RNG is seeded with the system time.
	// But because the program runs so fast,
	// the seed is essentially the same for
	// every instance, so the variables look
	// identical. If the program is run step
	// by step, introducing some time between
	// calls, the "randomnessness" comes back.

	Ristream(sz) >> msg >> msg2;
	std::cout << msg << "\t" << msg2 << "\n";
}

void t2() {
	const int sz = 5;
	char msg[sz + 1], msg2[sz + 1];
	int num;

	Ristream2(sz) >> msg >> num >> msg2;
	std::cout << msg << "\t" << num << "\t" << msg2 << "\n";
}

int main()
{
	t1();
	t2();

	return 0;
}