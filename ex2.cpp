#include <iostream>
#include <cstdlib>

using namespace std;

void deciToBina(int );
void binaToDeci(string , int);
string binNumber;
int decNumber = 0;
int strLen = 0;
int temp = 1;

int main()
{
    for(;;)                                                      //infinite loop to make us of the program many times
    {
        strLen = 0;
        int choise;
        cout << "Hello, welcome in Jacob's calculator." << endl;
        cout << "If you would like to change Decimal to a Binary number - press 1." << endl;
        cout << "If you would like to change Binary to a Decimal number - press 2." << endl;
        cout << "Exit - 0" << endl;
        cin >> choise;

        while(choise != 2 && choise != 1 && choise != 0)         //safety kit
        {
            cout << "Wrong number try again!(1, 2 or 0).";
            cin >> choise;
        }

        if(choise == 1)
        {
            cout << "Enter a decimal number(max: 32767): ";
            cin >> decNumber;
            cout << decNumber << " in binary system is: ";
            deciToBina(decNumber);
            cout <<"." << endl;
        }
        else if(choise == 2)
        {                                                        //binary to deci
            cout << "Enter a binar number: " << endl;
            cin >> binNumber;

            while(binNumber[strLen] != NULL)                      //getting our string length
            {
                strLen++;
            }

            for(int i = 1; i <= strLen; i++)                       //safety first
            {
                if(binNumber[i - 1] == '0' || binNumber[i - 1] == '1')
                {
                    continue;
                }
                else
                {
                    cout << endl << binNumber << endl;
                    cout << binNumber << " is not a binary number, try again:" << endl;
                    cin >> binNumber;
                    i = 0;
                    cout << endl << binNumber << endl;
                    while(binNumber[strLen] != NULL)                //getting new string length
                    {
                        strLen++;
                    }
                }
            }
            binaToDeci(binNumber, strLen);                           //function
        }
        else                                                         //breaking the infinite loop
        {
            exit(0);
        }
        cout << endl << endl;
    }
}

void deciToBina(int decNumber)
{
    int x = 0;
    int temp[15];                                       //max 15, so its 2^15 - 1 = 32767

    for(int i = 0; decNumber > 0; i++)
    {
        temp[i] = decNumber % 2;
        decNumber = decNumber / 2;
        x++;                                             //indicator to save the number bacwards
    }

    for(int i = x - 1; i >= 0; i--)
    {
        cout << temp[i];
    }
}


void binaToDeci(string binNumber, int stringLength)
{
    decNumber = 0;
    temp = 1;

    for(int i = stringLength - 1; i >= 0; i--)          //going from last to 1st
    {
        if(binNumber[i] == '1')                         //in case == 0 nothing is changing
        {
            decNumber += temp;
        }
        temp *= 2;                                       //powers of 2 for each next bite
    }
    cout << endl << binNumber << " in Decimal will be: " << decNumber << endl;
}
