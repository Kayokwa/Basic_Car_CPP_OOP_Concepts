#include "Main.h"
#pragma once
int main()
{
	Car	redVolvo(20, 30);			
	cout << "Red	Volvo	Speed:	" << redVolvo.getSpeed() << "	miles/hour" << ",	Direction:	" << redVolvo.getDirection() << "	degrees" << endl;

	redVolvo.accelerate(30);			
	redVolvo.turnLeft(60);		
	cout << "Red	Volvo	Speed:	" << redVolvo.getSpeed() << "	miles/hour" << ",	Direction:	" << redVolvo.getDirection() << "	degrees" << endl;

	redVolvo.decelerate(60);			
	redVolvo.turnRight(50);			
	cout << "Red	Volvo	Speed:	" << redVolvo.getSpeed() << "	miles/hour" << ",	Direction:	" << redVolvo.getDirection() << "	degrees" << endl;

	return 0;
};
