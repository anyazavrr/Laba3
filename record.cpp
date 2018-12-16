#include "record.h"
#include "baseacid.h"
#include "aminoacid.h"
#include "specialacid.h"
#include <iostream>
record::record()
{
    acid = NULL;
    next = NULL;
    prev = NULL;
}
record::record(string s, record *last)
{
    if(s.length()==1)
    {
        aminoacid *ob = new aminoacid(s);
        acid = ob;
        prev = last;
        next = NULL;
        last->next = (this);


    }
    else if(s.length()==2)
    {
        specialacid *ob = new specialacid(s);
        acid = ob;
        prev = last;
        next = NULL;
        last->next = (this);
    }
    else
    {
        acid = NULL;
        next = NULL;
        prev = NULL;

    }
}
baseacid* record::getacid() const
{
    return acid;
}
void record::setacid(string s)
{
    if(s.length()==1)
    {
        aminoacid *ob=new aminoacid(s);
        acid = ob;////!!!!

    }
    else if(s.length()==2)
    {
        specialacid *ob=new specialacid(s);
        acid = ob;
    }
    else
    {
        acid = NULL;

    }
}
/*record::~record()
{
    delete(acid);
    delete(next);
    delete(prev);
}*/
iter &iter::operator++()
{
    if(curr->next!=NULL)
    curr = curr->next;
    return *this;
}
iter &iter::operator--()
{
    if(curr->prev!=NULL)
    curr = curr->prev;
    return *this;
}



