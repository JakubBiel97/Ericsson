#include <iostream>
#include "Car.h"
#include <ctime>
#include <cstdlib>
#include <windows.h>

Car::Car(string name1, int value1, int time1)
{
    name = name1;
    value = value1;
    time = time1;
}

Car::~Car()
{

}

Void Car::go()
{
    for(;;)
    {
        srand(time(NULL));
		int tempTime = 0;										//will store there 1 or 0 - (adding speed or lowering the speed) fully randomly
		tempTime = rand() % 2;

		cout << name << " = " << value <<endl;
		Sleep(time);

		if(tempTime == 1)
        {
            this->value += rand % 3;
        }
        else
        {
            this->value -= rand % 3;
            if(this->value <= 0)
            {
                cout << "Car has stopped.";
                exit(0);
            }
        }
    }
}
