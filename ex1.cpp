#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int numberOfLoadedObjects = 0;
    int numberOfErrorObjects = 0;

    //char* numbers[];
    string numbersFromInput;
    fstream file;
    file.open("input.txt", ios::in);                        //openning the the input file

    if(file.good() == false)                                 //testing if file did open
    {
        cout << "Error while opening the file." << endl;
        exit(0);
    }
    else
    {
        getline(file, numbersFromInput);                        //getting the numbers to our string
        file.close();                                           //closing file
        //cout << numbersFromInput << endl;
    }

    unsigned int strLen = numbersFromInput.length();            //ilosc znakow
    //ilosc wczytanych obiektow:
    numberOfLoadedObjects = strLen / 8;                         //8 bitow to 1 obiekt
    cout << numberOfLoadedObjects;

    //for (int i = 0; i < strLen; i + 8)

}
