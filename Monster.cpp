#include "Monster.h"
#include <iostream>

AMonster::AMonster()
{
	R = 255;
	G = 0;
	B = 0;
}

AMonster::AMonster(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	SortOrder = 4;

	R = 255;
	G = 0;
	B = 0;
}

AMonster::~AMonster()
{
}

