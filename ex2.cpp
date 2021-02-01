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
    for(;;)
    {
        int choise;
        cout << "Hello, welcome in Jacob's calculator." << endl;
        cout << "If you would like to change Decimal to a Binary number - press 1." << endl;
        cout << "If you would like to change Binary to a Decimal number - press 2." << endl;
        cin >> choise;

        while(choise != 2 && choise != 1)                                   //safety kit
        {
            cout << "Wrong number try again!(1 or 2).";
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
        else
        {                                               //binary to deci
            cout << "Enter a binar number: " << endl;
            cin >> binNumber;

            while(binNumber[strLen] != NULL)           //getting our string length
            {
                strLen++;
            }

            //cout << endl << strLen;

            /*for(int i = 0; i < strLen; i++)                       //safety first
            {
                while(binNumber[i] != '0' || binNumber[i] != '1' || binNumber[i] != NULL)
                {
                    cout << binNumber << " is not a binary number, try again:" << endl;
                    cin >> binNumber;
                    i = 0;
                    while(binNumber[strLen] != NULL)           //getting our string length
                    {
                        strLen++;
                    }
                }
            }*/
            binaToDeci(binNumber, strLen);
        }
        cout << endl << endl;
    }
}

void deciToBina(int decNumber)
{
    int x = 0;
    int temp[15];

    for(int i = 0; decNumber > 0; i++)
    {
        temp[i] = decNumber % 2;
        decNumber = decNumber / 2;
        x++;
    }

    for(int i = x - 1; i >= 0; i--)
    {
        cout << temp[i];
    }
}

void binaToDeci(string binNumber, int stringLength)
{
    while(binNumber[strLen] != NULL)           //getting our string length
    {
        strLen++;
    }

    /*for(int i = 0; i < strLen; i++)                       //safety first
    {
        while(binNumber[i] != '0' || binNumber[i] != '1')
        {
            cout << binNumber << " is not a binary number, try again:" << endl;
            cin >> binNumber;
            i = 0;

            while(binNumber[strLen] != NULL)           //getting our string length
            {
                strLen++;
            }
        }
    }*/
    cout << endl << stringLength << endl;

    cout << binNumber[1] << binNumber[2] << endl;

    for(int i = stringLength - 1; i >= 0; i--)
    {
        if(binNumber[i] == '1')
        {
            decNumber += temp;
        }

        temp *= 2;
        cout << endl << temp << endl;
    }

    cout << endl << binNumber << " in Decimal will be: " << decNumber << endl;

}
