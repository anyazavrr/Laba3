#ifndef SPECIALACID_H
#define SPECIALACID_H
#include "baseacid.h"
class specialacid:public baseacid
{
    string shortname;
public:
    specialacid();
    specialacid(string s);
    string getshortname() const;
    int func()
    {
        return 2;
    }
};

#endif // SPECIALACID_H
