/**
  * @file BaseConverter.cpp
  * @version 1.0
  * @date 19/04/17
  * @author Raul Edgar Quispe Totocayo
  * @title BaseConverter
  * @brief
  */
#include "baseconverter.h"
int BaseConverter::convertNtoDecimal(std::string number, int base)
{

    //std::string str=intToString(number);

    int result=0;//variable para guardar el resultado
    for (int i = number.length()-1; i>=0; i--) {
        int intNumber=number[i];//almacena el valor del caracter en la posicion i
        if(number[i]>='A' && number[i] <='F')//si el caracter ASI es de A--F (esto para los hexadecimales)
        {
            intNumber-=55;//convierte a entero el valor 55 al valor del caracter en codgo ASI
        }
        else if(number[i]>='0' && number[i] <='9')
        {
            intNumber-=48;
        }
        result+=intNumber*(pow(base,i));//almacena el resultado este por el metodo de polinomio numero*(base)^i
    }
    std::cout <<  "The result is: "<<result <<std::endl;//imprime el resultado
}
int BaseConverter::convertDecimalToN(int number, int base)
{
    for (int i = 0; number!=0; ++i) {
       int convert=number%base;//calcula el reciduo 
       number /= base;//divide el nuemro por la base y actualiza este 
       if(convert>=10 && convert<=15){//en el caso de que el residuo sea >=10 <=15 le suma 55 al caracter
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
    int tem=number%10; //modulo 10 de un numero simpre sera el ultimo numero
    std::string str=intToString(number);
    std::string str1= intToString(tem);
    if(str[str.length()-1]==str1[0])//si el modulo del ultimo numero concuerda con el ultimo numero
        return true;
    else
        return false;
}

std::__cxx11::string BaseConverter::intToString(int number)//convierte un entero en string
{
    std::stringstream ss;
    ss << number;
    std::string str;
    ss >> str;
    return str;

}

