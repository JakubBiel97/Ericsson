#include <iostream>
#include <thread>
#include <ctime>

using namespace std;

int main()
{

    Car c1(Speed, 60, 1000);
    thread thr1(c1.go(), c1)
    thr1.join();

    //c1.go();

    //Car
}
