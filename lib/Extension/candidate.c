#include "candidate.h"
#include "lib/standard_libraries/std_lib.h"

typedef struct {

    int vote;
    char * name;

} Candidate;


//check vote is valid?
bool CheckVote(char * name_vote, char * candidate) {

    int index;
    for (index = 0; index < strlen(name_vote); index++) {

        if (name_vote[index] != candidate[index]) {

            return false;
        }
    }

    return true;
}