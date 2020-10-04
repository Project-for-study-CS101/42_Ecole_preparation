#include "lib/standard_libraries/std_lib.h"
#include "lib/Extension/candidate.h"

#define MAX 50


int main(int argc, char * candidates[]) {

    argc--;

    int i, j, vote;
    char name_vote[MAX]; 
    bool valid_check = false;

    scanf("%d", &vote);

    int regist[vote];
    

    //vote candidate
    for(i = 0; i < vote; i++) {

        fgets(name_vote, MAX, stdin);
        //clear newline chariter
        name_vote[strlen(name_vote)-1] = '\0';

        //check candidates
        for (j = 0; j < argc; j++) {

            if (CheckVote(name_vote, candidates[j])) {
                valid_check = true;
                
            } else {

            }
            
        }

        if (!valid_check) {

            printf("ERROR");
        }



        
    }

    exit(EXIT_SUCCESS);
}