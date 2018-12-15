#include "protein.h"

protein::protein()
{
    begin = NULL;
    end = NULL;
}
record* protein::getbegin() const
{
    return begin;
}
record* protein::getend() const
{
    return end;
}
void protein::add(string s)
{
    if (begin!=NULL)//not first
    {
        record *r = new record(s, end);
        end = r;

    }
    else //first
    {
        record *n = new record();
        n->setacid(s);
        begin = n;
        end = n;
    }
}
protein::~protein()
{
    delete(begin);
    delete(end);
}
