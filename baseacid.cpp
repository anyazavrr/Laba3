#include "baseacid.h"
#include <iostream>
baseacid::baseacid()
{
    fullname = "Аланин";
}
baseacid::baseacid(string s)
{
    if((isalpha(s[0]))
          && s!="b" && s!="B"
            && s!="j" && s!="J"
          && s!="o" && s!="O"
            && s!="u" && s!="U"
          && s!="x" && s!="X"
            && s!="z" && s!="b")
    {
        if (s == "G" || s=="g")
        {
            fullname= "Глицин";
        }
        if (s == "L" || s=="l"){
            fullname= "Лейцин";
        }
        if (s == "Y" || s=="y"){
            fullname= "Тирозин";
        }
        if (s == "S" || s=="s"){
            fullname= "Серин";
        }
        if (s == "E" || s=="e"){
            fullname= "Глутаминовая кислота";
        }
        if (s == "Q" || s=="q"){
            fullname= "Глутамин";
        }
        if (s == "D" || s=="d"){
            fullname= "Аспарагиновая кислота";
        }
        if (s == "N" || s=="n"){
            fullname= "Аспарагин";
        }
        if (s == "F" || s=="f"){
            fullname= "Фенилаланин";
        }
        if (s == "A" || s=="a"){
            fullname= "Аланин";
        }
        if (s == "K" || s=="k"){
            fullname= "Лизин";
        }
        if (s == "R" || s=="r"){
            fullname="Аргинин";
        }
        if (s == "H" || s=="h"){
            fullname= "Гистидин";
        }
        if (s == "С" || s=="c"){
            fullname= "Цистеин";
        }
        if (s == "V" || s=="v"){
            fullname= "Валин";
        }
        if (s == "P" || s=="p"){
            fullname="Пролин";
        }
        if (s == "W" || s=="w"){
            fullname="Триптофан";
        }
        if (s == "I" || s=="i"){
            fullname="Изолейцин";
        }
        if (s == "M" || s=="m"){
            fullname="Метионин";
        }
        if (s == "T" || s=="t"){
            fullname="Треонин";
        }
        if(s == "hP")
        {
            fullname = "Гидроксипролин";
        }
        if(s == "hK")
        {
            fullname = "Гидроксилизин";
        }
    }
    else
    {
        fullname = "Аланин";
    }

}

string baseacid::getfullname() const
{

    return string(fullname);
}
baseacid::baseacid(int k)
{
    fullname = "Гидроксипролин";
}
