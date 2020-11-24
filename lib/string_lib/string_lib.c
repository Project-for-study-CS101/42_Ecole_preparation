#include "string_lib.h"

void clear_newline_string(char (*ptrChar)[], int length)
{
    (*ptrChar)[length-1] = '\0';
}