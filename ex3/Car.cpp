#include "Car.h"
#include <ctime>
#include <cstdlib>

using namespace std;

Car::Car()
{
	cout << "Lets make our car: " << endl << "Add starting speed: ";
	cin >> speed;
	cout << "Add starting egine temperature:";
	cin >> engineTemp;
	cout << "Add starting outside temperature:";
	cin >> outsideTemp;
}

Car::~Car()
{

}

void Car::go()
{
	for (;;)													//infinite loop
	{
		srand(time(NULL));
		int tempTime = 0;										//will store there 1 or 0 - (adding speed or lowering the speed) fully randomly
		tempTime = rand() % 2;
		
		cout << "Predkosc == " << this->speed << endl;
		_sleep(1000);
		if (tempTime == 1)
		{
			this->speed += rand() % 3;							//changing the speed about 0,1 or 2 hm\h
		}
		else
		{
			this->speed -= rand() % 3;
			if (this->speed <= 0)
			{
				cout << "Car has stopped.";
				exit(0);
			}
		}
		cout << "Predkosc == " << this->speed << endl;
		_sleep(1000);

		tempTime = rand() % 2;
		if (tempTime == 1)
		{
			this->speed += rand() % 3;
		}
		else
		{
			this->speed -= rand() % 3;
			if (this->speed <= 0)
			{
				cout << "Car has stopped.";
				exit(0);
			}
		}
		cout << "Predkosc == " << this->speed << endl;

		//turning degree
		cout << "Turning degree == ";							//adding some more informations
		if (tempTime == 1)										//turning lets say left with max 15degree
		{
			cout << rand() % 15 << "\% west." << endl;
		}
		else
		{
			cout << rand() % 15 << "\% east." << endl;
		}

		_sleep(1000);

		tempTime = rand() % 2;
		if (tempTime == 1)
		{
			this->speed += rand() % 3;					
		}
		else
		{
			this->speed -= rand() % 3;
			if (this->speed <= 0)
			{
				cout << "Car has stopped.";
				exit(0);
			}
		}
		cout << "Predkosc == " << this->speed << endl;
		//engineTemp
		cout << "Engine temperature == ";
		if (tempTime == 1)
		{	
			this->engineTemp += rand() % 3;						//increasing randomly temp for this sample
		}
		else
		{
			this->engineTemp -= rand() % 2;						//lowering
		}
		cout << this->engineTemp << endl;

		_sleep(1000);

		tempTime = rand() % 2;
		if (tempTime == 1)
		{
			this->speed += rand() % 3;
		}
		else
		{
			this->speed -= rand() % 3;
			if (this->speed <= 0)
			{
				cout << "Car has stopped.";
				exit(0);
			}
		}
		cout << "Predkosc == " << this->speed << endl;

		//outsideTemp
		cout << "Outside temperature == ";
		if (tempTime == 1)
		{
			this->outsideTemp += rand() % 2;
		}
		else
		{
			this->outsideTemp -= rand() % 2;
		}
		cout << this->outsideTemp << endl;

		_sleep(1000);

		tempTime = rand() % 2;
		if (tempTime == 1)
		{
			this->speed += rand() % 3;
		}
		else
		{
			this->speed -= rand() % 3;
			if (this->speed <= 0)
			{
				cout << "Car has stopped.";
				exit(0);
			}
		}
		cout << "Predkosc == " << this->speed << endl;

	}
}
