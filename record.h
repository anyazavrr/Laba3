#ifndef RECORD_H
#define RECORD_H
#include "baseacid.h"
class iter;
class record
{
    baseacid* acid;
    record* next;
    record* prev;

public:
    record();
    ~record();
    record(string s, record* last);
    baseacid* getacid() const;
    void setacid (string s);
    friend class iter;
};
class iter
{
public:
    record* curr;
    void moveforward()
    {
        curr = curr->next;
    }
    void moveback()
    {
        curr = curr->prev;
    }

};

#endif // RECORD_H
