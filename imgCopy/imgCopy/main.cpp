#include <iostream>

#include "imgCopy.h"
#include "imgManip.h"

int main()
{	
	int Btint[3] = { 0, 50, 50 };

	cpyImg("input.tga", "copyTGA.tga");
	applyTint("copyTGA.tga", "TGAtinted.tga", Btint);

	return 0;
}