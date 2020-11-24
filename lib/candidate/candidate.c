#include "candidate.h"


void Regist_Candidate(char * name[], Candidate (*ptrCan)[], int length)
{
    int i;
    for (i = 1; i <= length; i++)
    {
       
        strcpy((*ptrCan)[i-1].name, name[i]);
        (*ptrCan)[i-1].vote = 0;
    }
}