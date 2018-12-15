#include "aminoacid.h"
#include "baseacid.h"
aminoacid::aminoacid():baseacid()
{
    shortname = "A";
}
aminoacid::aminoacid(string s):baseacid(s)
{
    if(s.length()==1 && isalpha(s[0])
          && s!="b" && s!="B"
            && s!="j" && s!="J"
          && s!="o" && s!="O"
            && s!="u" && s!="U"
          && s!="x" && s!="X"
            && s!="z" && s!="b")
        shortname = s;

    else
        shortname = "A";

}
string aminoacid::getshortname() const
{
    return shortname;
}
