#ifndef BASEACID_H
#define BASEACID_H
#include <string>
using namespace std;
class baseacid
{
protected:

    string fullname;
public:
    baseacid();
    baseacid(int k);
    baseacid(string s);
    string getfullname() const;
    /*virtual int func()
    {
        return 0;
    }*/
};

#endif // BASEACID_H
