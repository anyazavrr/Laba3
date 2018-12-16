#include "protein.h"
#include <fstream>
#include <iostream>
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
iter protein::getbegin_iter() const
{
    iter i(begin);
    return i;
}
iter protein::getend_iter() const
{
    iter i(end);
    return i;
}
void protein::deleterecord(iter &it)
{
    if (it.curr != end && it.curr!=begin)
    {
        cout<<"middle\n";
        record *pr  = it.curr->prev;
        record *ne = it.curr->next;
        pr->next = it.curr->next;
        ne->prev = it.curr->prev;
    }
    if (it.curr == end)
    {
        cout<<"end\n";
        end = it.curr->prev;
    }

    if (it.curr==begin)
    {
        cout<<"begin\n";
        begin = it.curr->next;
        cout<<"done\n";
    }
    cout<<"out\n";
    delete(it.curr);
    cout<<"out2\n";

}
bool protein::writefile(string nameof) const
{
    bool flag;
    ofstream file;
    file.open(nameof.c_str());
    if (!file)
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }
    iter it(begin);
    while(it.curr->next!=NULL)
    {
        if (it.curr->getacid()->func()==1)
        {
            aminoacid *ac =dynamic_cast<aminoacid*>(it.curr->getacid());
            file<<ac->getshortname()<<"\n";
        }else if(it.curr->getacid()->func()==2)
        {
            specialacid *sp = dynamic_cast<specialacid*>(it.curr->getacid());
            file<<sp->getshortname()<<"\n";
        }
        ++it;
    }
    file.close();
    return flag;
}

void protein::deleteall()
{
    record *curr = begin;
    record *prev = begin;
    if(curr!=NULL)
    {
        while(curr->next!=NULL )
        {
            curr = curr->next;
            delete(prev);
            prev = curr;
        }
        delete(curr);
    }
    begin = NULL;
    end = NULL;
}
