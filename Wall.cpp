#include "Wall.h"
#include <iostream>
AWall::AWall()
{
}

AWall::AWall(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	//X = NewX;
	//Y = NewY;
	//Shape = NewShape;
}

AWall::~AWall()
{
}

void AWall::Block()
{
}
