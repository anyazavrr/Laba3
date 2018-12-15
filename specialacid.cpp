#include "specialacid.h"

specialacid::specialacid():baseacid(1)
{
    shortname = "hP";
}
specialacid::specialacid(string s):baseacid(s)
{
  if(s == "hK")
        {
            shortname = "hK";
        }

    else
    {
        shortname = "hP";

    }
}
string specialacid::getshortname() const
{
    return shortname;
}
