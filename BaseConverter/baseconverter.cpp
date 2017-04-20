/**
  * @file BaseConverter.cpp
  * @version 1.0
  * @date 19/04/17
  * @author Raul Edgar Quispe Totocayo
  * @title BaseConverter
  * @brief
  */
#include "baseconverter.h"

BaseConverter::BaseConverter()
{

}

int BaseConverter::convertNtoDecimal(std::string number, int base)
{

    //std::string str=intToString(number);
    int result=0;
    for (int i = number.length()-1; i>=0; i--) {
        int intNumber=number[i];
        if(number[i]>='A' && number[i] <='F')
        {
            intNumber-=55;
        }
        else if(number[i]>='0' && number[i] <='9')
        {
            intNumber-=48;
        }
        std::cout << number[i] <<  "---" << intNumber << std::endl;
        result+=intNumber*(pow(base,i));
    }
    std::cout <<  "The result is: "<<result <<std::endl;
}
int BaseConverter::convertDecimalToN(int number, int base)
{
    std::string list{};
    for (int i = 0; number!=0; ++i) {
       int convert=number%base;
       number /= base;
       if(convert>=10 && convert<=15){
           convert+=55;
           char str=convert;
           std::cout << "The result is:" << str ;
       }
       else
           std::cout <<convert ;
    }

}

bool BaseConverter::checkDecimal(int number)
{
    int tem=number%10;
    std::string str=intToString(number);
    std::string str1= intToString(tem);
    if(str[str.length()-1]==str1[0])
        return true;
    else
        return false;
}

std::__cxx11::string BaseConverter::intToString(int number)
{
    std::stringstream ss;
    ss << number;
    std::string str;
    ss >> str;
    return str;

}

//bool BaseConverter::acheckN(int numer)
//{

//}
