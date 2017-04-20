/**
  * @file BaseConverter.h
  * @version 1.0
  * @date 19/04/17
  * @author Raul Edgar Quispe Totocayo
  * @title BaseConverter
  * @brief
  */
#ifndef BASECONVERTER_H
#define BASECONVERTER_H
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class BaseConverter
{
public:
    BaseConverter();
    int convertNtoDecimal(std::string,int);
    int convertDecimalToN(int,int);
    bool checkDecimal(int);
    bool checkN(int);

    std::string intToString(int);

};


#endif // BASECONVERTER_H
