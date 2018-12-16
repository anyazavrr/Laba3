#ifndef PROTEIN_H
#define PROTEIN_H
#include "aminoacid.h"
#include "specialacid.h"
#include "record.h"
#include <fstream>
class protein
{
    record *begin;
    record *end;
public:
    protein();//
    ~protein();
    void add(string s);
    void deleterecord(iter &it);
    friend class iter;
    record* getbegin() const;//done
    record* getend() const;//done
    iter getbegin_iter() const;
    iter getend_iter() const;
    int count()
    {
        iter it = this->getbegin_iter();
        int i=0;
        int k = 0;
        if(this->getbegin()!=NULL)
        {
            do
            {
                k++;
                if(it==this->getend_iter()) i =1;
                ++it;
            }
            while(i==0);
            return k;
        }else return 0;
    }


    bool writefile(string nameof) const;
    void deleteall();//done
    friend ifstream &operator>>(ifstream &ifs, protein &examp)
    {
        string s ;
        while(getline(ifs,s))//прочитать определенное число
        {
            examp.add(s);
        }
        return ifs;
    }

};

#endif // PROTEIN_H
