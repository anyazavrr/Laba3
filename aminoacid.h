#ifndef AMINOACID_H
#define AMINOACID_H
#include <string>
#include "baseacid.h"
using namespace std;
class aminoacid: public baseacid
{
     string shortname;
public:
    aminoacid();
    aminoacid(string s);
    string getshortname() const;
    int func()
    {
        return 1;
    }
};

#endif // AMINOACID_H
