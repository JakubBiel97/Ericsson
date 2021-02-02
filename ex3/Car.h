#pragma once
#include <iostream>

using namespace std;

class Car
{
private:
	int speed = 0;
	int engineTemp = 0;
	int outsideTemp = 0;

public:
	Car(int, int, int);
	~Car();

	void go();
};

