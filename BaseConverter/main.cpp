/**
  * @file main.cpp
  * @version 1.0
  * @date 19/04/17
  * @author Raul Edgar Quispe Totocayo
  * @title main
  * @brief
  */
#include "baseconverter.h"
#include <iostream>

using namespace std;
int main()
{
    int imput,number,base;
    string imputNumber;
    cout << "  ///////////////////////////////" << endl;
    cout << " ///Welcome To Base Converter///" <<endl;
    cout << "///////////////////////////////" << endl;
    BaseConverter convert;
    cout << "what is you do? " << endl;
    cout << "press 1: from convert base Decimal to N" << endl;
    cout << "press 2: from convert base N to Decimal" << endl;
    cin>> imput;
    if(imput==1)
    {
        cout << "Enter the number to convert  :" ; cin >> number;
        cout << "What base do you want convert:" ; cin >> base;
        convert.convertDecimalToN(number,base);
    }
    else if(imput==2)
    {
        cout << "Enter the number to convert  " ; cin >>imputNumber;
        cout << "What base is that number?   :" ; cin >> base;
        convert.convertNtoDecimal(imputNumber,base);
    }
}
