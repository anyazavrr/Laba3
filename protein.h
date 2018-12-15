#ifndef PROTEIN_H
#define PROTEIN_H
#include "aminoacid.h"
#include "specialacid.h"
#include "record.h"
class protein
{
    record *begin;
    record *end;
public:
    protein();//
    ~protein();
    void add(string s);
    void deleterecord(record *curr);

    record* getbegin() const;//done
    record* getend() const;//done


    int readfile();//done
    int readfile(char nameof[]);
    int writefile();//done
    int writefile(char nameof[]);
    void deleteall();//done

};

#endif // PROTEIN_H
