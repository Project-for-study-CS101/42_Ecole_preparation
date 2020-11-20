#include "candidate_Check.h"

void Display_Candidates(char * name[], int length, int (*Print_function_Pointer)(const char * restrict, ...))
{
    int i;

    (*Print_function_Pointer)("--------------Display Candidates----------\n");
    for (i = 1; i <= length; i++)
    {
        (*Print_function_Pointer)("Candidate[%d] = %s\n", i, name[i]);
    }
    (*Print_function_Pointer)("--------------Stop Display----------------\n");
}

void print_name_card(char * name, int (*Print_function_Pointer)(const char * restrict, ...))
{
    int i = 0;

    for 
    
    
}