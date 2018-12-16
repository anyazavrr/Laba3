#ifndef RECORD_H
#define RECORD_H
#include "baseacid.h"
#include "aminoacid.h"
#include "specialacid.h"
class iter;
class record
{
    baseacid* acid;
    record* next;
    record* prev;

public:
    record();
    record(string s, record* last);
    baseacid* getacid() const;
    void setacid (string s);
    friend class iter;
    friend class protein;
};
class iter
{
    record* curr;
    iter(record* examp)
    {
        curr = examp;

    }


public:
    iter()
    {
        curr = NULL;
    }
    friend class protein;
    iter &operator++();
    iter &operator--();
    bool operator ==(const iter &other) const
     {
         return (curr == other.curr);
     }
    string getshortname()
    {
        if (curr->getacid()->func()==1)
        {
            aminoacid *ac =dynamic_cast<aminoacid*>(curr->getacid());
            return ac->getshortname();
        }else if(curr->getacid()->func()==2)
        {
            specialacid *sp = dynamic_cast<specialacid*>(curr->getacid());
            return sp->getshortname();
        }
        return "";
    }

};

#endif // RECORD_H
