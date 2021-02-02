#pragma once
#include <iostream>

using namespace std;

class Car
{
private:
    string name;
	int value = 0;
	int time = 0;
	//int engineTemp = 0;
	//int outsideTemp = 0;

public:
    Car(string, int, int)
	//Car(int, int, int);
	~Car();

	void go();
};
