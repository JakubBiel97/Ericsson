#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    unsigned int numberOfLoadedObjects = 0;
    unsigned int numberOfErrorObjects = 0;
    unsigned int lengthOfObject = 8;                           // amount of bits per object
    unsigned int strLen = 0;
    string endingString;
    string numbersFromInput;

    fstream file;
    file.open("input.txt", ios::in);                          //opening the the input file

    if(file.good() == false)                                  //testing if file did open
    {
        cout << "Error while opening the file." << endl;
        exit(0);
    }
    else
    {
        getline(file, numbersFromInput);                        //getting the numbers to our string
        file.close();                                           //closing file
    }


    while(numbersFromInput[strLen] != NULL)                     //getting string length without ".length" function
    {
        strLen++;
    }

    //strLen = numbersFromInput.length();                        //amount of numbers
    //number of objects loaded
    numberOfLoadedObjects = strLen / lengthOfObject;            //8 bits is 1 object

    //swiping around our string for errors
    for (int i = 0; i < strLen; i+=lengthOfObject)               //getting to beg of every single object
    {
        //looking for errors in "id" number and control bite
        if(numbersFromInput[i+3] != '0' && numbersFromInput[i+7] == '0'
           || numbersFromInput[i+3] != '1' && numbersFromInput[i+7] == '1')
        {
            numberOfErrorObjects++;
        }
        else if(numbersFromInput[i+4] == '0' && numbersFromInput[i+5] == '0'
                && numbersFromInput[i+6] == '0')
        {
            numberOfErrorObjects++;
        }
        else                                                      //creating a new string with only
        {                                                         // "correct" objects (without errors)
            for(int j = 0; j < lengthOfObject  ; j++)
            {
                endingString += numbersFromInput[i + j];
            }
        }

    }

    //getting out output.txt
    file.open("output.txt", ios::out);
    if(file.good() == false)
    {
        cout << "Something went wrong with creating a file." << endl;
        exit(0);
    }
    else                                                //saving to file
    {
        file << numberOfLoadedObjects << endl;
        file << numberOfErrorObjects << endl;
        file << endingString << endl;
        file.close();
    }


}
