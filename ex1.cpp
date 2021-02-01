#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main()
{
    int gettingTheStringLength = 0;
    int numberOfLoadedObjects = 0;
    int numberOfErrorObjects = 0;

    string endingString;
    string numbersFromInput;
    char tempChar;
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
    //number of objects loaded
    numberOfLoadedObjects = strLen / 8;                         //8 bitow to 1 obiekt
    cout << numberOfLoadedObjects << endl;

    //swipping around our string for errors
    for (int i = 0; i < strLen; i+=8)
    {
        //looking for errors in number and control bite
        if(numbersFromInput[i+3] != '0' && numbersFromInput[i+7] == '0')
        {
            numberOfErrorObjects++;
        }
        else if(numbersFromInput[i+3] != '1' && numbersFromInput[i+7] == '1')
        {
            numberOfErrorObjects++;
        }
        else if(numbersFromInput[i+4] == '0' && numbersFromInput[i+5] == '0'
                && numbersFromInput[i+6] == '0')
        {
            numberOfErrorObjects++;
        }
        else
        {
            for(int j = 0; j < 8  ; j++)
            {
                endingString += numbersFromInput[i + j];
            }
        }

    }

    cout << numberOfErrorObjects << endl;
    cout << endingString;

    //getting out ourput.txt
    file.open("output.txt", ios::out);
    if(file.good() == false)
    {
        cout << "Something went wrong with creating a file." << endl;
        exit(0);
    }
    else
    {
        file << numberOfLoadedObjects << endl;
        file << numberOfErrorObjects << endl;
        file << endingString << endl;
    }


}
