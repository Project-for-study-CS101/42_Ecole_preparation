#ifndef CANDIDATE_CHECK_H
    #define CANDIDATE_CHECK_H
#endif

void Display_Candidates(char * name[], int length, int (*Print_function_Pointer)(const char * restrict, ...));
void print_name_card(char * name, int (*Print_function_Pointer)(const char * restrict, ...));