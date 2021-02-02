#include <iostream>
#unclude "Car.h"

using namespace std;

int main()
{
	cout << "Running constructor(creating a car). " << endl;
	//constructor
	//Car c1(speed, engineTemp, outsideTemp)
	Car c1(55, 30, 5);
	//method
	c1.go();

	/*
	Symulacja Polega na nadaniu startowych wartosci dla naszego pojazdu
	W czasie przebiegu symulacji w funkcji go (z infinite loopem) nasze wartosci sa randomowo zmieniane
	Symuluje to zmiany predkosci jak i kierunku jazdy jakbysmy prowadzili auto + nagrzewanie sie silnika i temperature otoczenia
	Probki naszej predkosci odbywaja sie w odstepach co 1 sekunda, a reszta kolejno co 3, 4 i 5 sekundy

	Do pokazania OOP uzylem zwyczajnej klasy Car do stworzenia obiektu
	*/
}
