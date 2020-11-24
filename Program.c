#include <stdio.h>
#include <stdlib.h>
#include "lib/string_lib/string_lib.h"
#include "lib/candidate/candidate.h"

#define string char *

int main(int arqgv, string argcs[])
{   
    //debug
    int argv = 5;
    char * argc[5] = {"./file", "odin", "cat", "mawin", "seeta"};
    //------variable------
    int round;
    argv--;
    char input_name[10];
    Candidate candidate_card[argv];
    //--------------------

    //regist candidate to card
    Regist_Candidate(argc, &candidate_card, argv);

    // input round for vote
    printf("round = ");    
    scanf("%d", &round);
    getchar(); //pass '\n' in buffer memory

    //round for vote
    int i;
    for (i = 0; i < round; i++)
    {
        printf("name = ");
        fgets(input_name, 10, stdin);
        clear_newline_string(&input_name, strlen(input_name));
        printf("name [%d] = %s\n", i, input_name);

        //If input name already in card_regist +1 point

        int j;
        for (j = 0; j < argv; j++)
        {   
            if (strcmp(candidate_card[j].name, input_name) == 0)
            {
                candidate_card[j].vote += 1;
            }
        }
    }

    //test
    int k, temp_score = 0, winner;
    for (k = 0; k < argv; k++)
    {
        if (candidate_card[k].vote > temp_score)
        {
            temp_score = candidate_card[k].vote;
            winner = k;
        }
    }
    printf("winner is %s\n", candidate_card[winner].name);
    exit(EXIT_SUCCESS);
}