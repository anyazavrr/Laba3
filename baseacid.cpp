#include "baseacid.h"
#include <iostream>
baseacid::baseacid()
{
    fullname = "������";
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
            fullname= "������";
        }
        if (s == "L" || s=="l"){
            fullname= "������";
        }
        if (s == "Y" || s=="y"){
            fullname= "�������";
        }
        if (s == "S" || s=="s"){
            fullname= "�����";
        }
        if (s == "E" || s=="e"){
            fullname= "������������ �������";
        }
        if (s == "Q" || s=="q"){
            fullname= "��������";
        }
        if (s == "D" || s=="d"){
            fullname= "������������� �������";
        }
        if (s == "N" || s=="n"){
            fullname= "���������";
        }
        if (s == "F" || s=="f"){
            fullname= "�����������";
        }
        if (s == "A" || s=="a"){
            fullname= "������";
        }
        if (s == "K" || s=="k"){
            fullname= "�����";
        }
        if (s == "R" || s=="r"){
            fullname="�������";
        }
        if (s == "H" || s=="h"){
            fullname= "��������";
        }
        if (s == "�" || s=="c"){
            fullname= "�������";
        }
        if (s == "V" || s=="v"){
            fullname= "�����";
        }
        if (s == "P" || s=="p"){
            fullname="������";
        }
        if (s == "W" || s=="w"){
            fullname="���������";
        }
        if (s == "I" || s=="i"){
            fullname="���������";
        }
        if (s == "M" || s=="m"){
            fullname="��������";
        }
        if (s == "T" || s=="t"){
            fullname="�������";
        }
        if(s == "hP")
        {
            fullname = "��������������";
        }
        if(s == "hK")
        {
            fullname = "�������������";
        }
    }
    else
    {
        fullname = "������";
    }

}

string baseacid::getfullname() const
{

    return string(fullname);
}
baseacid::baseacid(int k)
{
    fullname = "��������������";
}
