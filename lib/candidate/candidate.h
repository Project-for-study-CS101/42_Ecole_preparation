#ifndef CANDIDATE_H
    #define CANDIDATE_H
#endif

#ifndef STRING_H  
    #include <string.h>
#endif

#ifndef STDIO_H
    #include <stdio.h>
#endif


//struct
typedef struct 
{
    char name[10];
    int vote;
    
} Candidate;

//function
void Regist_Candidate(char * name[], Candidate (*ptrCan)[], int length);

