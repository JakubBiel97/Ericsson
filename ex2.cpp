#include <iostream>
#include <cstdlib>

using namespace std;

void deciToBina();
void binaToDeci();
string binNumber;
int decNumber = 0;
int temp = 1;

int main()
{
    int choise;
    cout << "Hello, welcome in Jacob's calculator." << endl;
    cout << "If you would like to change Decimal to a Binary number - press 1." << endl;
    cout << "If you would like to change Binary to a Decimal number - press 2." << endl;
    cin >> choise;

    while(choise != 2 && choise != 1)                                   //safety kit
    {
        cout << "Wrong number try again! ( 1 or 2).";
        cin >> choise;
    }

    if(choise == 1)
    {
        deciToBina();
    }
    else
    {
        binaToDeci();
    }
}

void deciToBina()
{

}

void binaToDeci()
{
    int strLen = 0;

    cout << "Type binary number: " << endl;
    cin >> binNumber;

    while(binNumber[strLen] != NULL)           //getting our string length
    {
        strLen++;
    }

    for(int i = 0; i < strLen; i++)                       //safety first
    {
        if(binNumber[i] != '0')
        {
            cout << "Wrong number, try again." << endl;
            exit(0);
        }
        else if(binNumber[i] != '1')
        {
            cout << "Wrong number, try again." << endl;
            exit(0);
        }
        else if(binNumber[i] != NULL)
        {
            cout << "Wrong number, try again." << endl;
            exit(0);
        }
    }

    for(int i = strLen; i < 0; i--)
    {
        if(binNumber[i] == '1')
        {
            decNumber += temp;
        }

        temp *= 2;
    }

    cout << endl << binNumber << " in Decimal will be: " << decNumber << endl;

}
