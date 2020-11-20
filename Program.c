#include <stdio.h>
#include "test/candidate_Check.h"


int main(int argv, char * candidates[])
{   
    Display_Candidates(candidates, --argv, &printf);
    int round;
    scanf("%d", &round);

    char name_vote_card[10];

    for (round; round > 0; round--)
    {
        fgets(name_vote_card, 10, stdin);
        printf("name = %s\n" ,name_vote_card);
    }

    
}
