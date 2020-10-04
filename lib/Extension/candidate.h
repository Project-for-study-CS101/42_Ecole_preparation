#define CANDIDATE_H
#include "lib/standard_libraries/std_lib.h"

typedef struct {

    int vote;
    char * name;

} Candidate;

bool CheckVote(char * name_vote, char * candidate);
