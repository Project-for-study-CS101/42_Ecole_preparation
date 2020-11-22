#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define LIMIT_NAME_LENGTH 10

// struct declare here
typedef struct
{
    char name[LIMIT_NAME_LENGTH];
    int vote;
} Candidate; 
// end struct declare

// function declare here
void SignUP_Candidates(int length, char * name_candidates[], Candidate (*ptrArr)[]);
void cleanString(char (*ptrString)[]);
void Add_member(Candidate (*ptrArr)[], char * name);
void Loop_thought_member(char * candidates[], Candidate (*ptrArr)[], int length_card_array, int length_of_candidate);
//here function declare

// -------------------
// * START Program
// * Program.c
// --------------------
int main(int argv, char * argc[]) 
{
    argv--; //delete un-used argument [./{nameprogram} ...]
    //sign up candidate
    Candidate card[argv];
    SignUP_Candidates(argv, argc, &card); 

    //input round for vote n time
    int round;
    scanf("%d", &round);
    getchar(); //clear buffer from input scanf function
   
    int i, index;
    //round vote
    char vote_card[LIMIT_NAME_LENGTH]; //card
    Candidate card_voted_array[round];

    for (i = 0; i < round; i++)
    {
        fgets(vote_card, LIMIT_NAME_LENGTH, stdin);
        cleanString(&vote_card); //clear newline in vote_card array

        //add card to card array
        Add_member(&card_voted_array, vote_card);
    }
    Loop_thought_member(argc, &card_voted_array, round, argv);
    
    exit(EXIT_SUCCESS);
}

//Function definitely
void SignUP_Candidates(int length, char * name_candidates[], Candidate (*ptrArr)[])
{
    int i;
    for (i = 0; i < length; i++) 
    {
        strcpy((*ptrArr)[i].name, name_candidates[i+1]);
        (*ptrArr)[i].vote = 0;
    }
}

void cleanString(char (*ptrString)[])
{
    int length = strlen(*ptrString);
    (*ptrString)[length-1] = '\0'; // replace new line character
}

void Add_member(Candidate (*ptrArr)[], char * name)
{
    static int index = 0;
    strcpy((*ptrArr)[index].name, name);
    (*ptrArr)[index].vote = 0;
    
    index++;
}

void Loop_thought_member(char * candidates[], Candidate (*ptrArr)[], int length_card_array, int length_of_candidate)
{
    //FIX
    int i, j;
    for (i = 0; i < length_card_array; i++)
    {
        for (j = 1; j <= length_of_candidate; j++)
        {
            if(!strcmp((*ptrArr)[i].name, candidates[j]))
            {
                printf("compare %s / %s\n", (*ptrArr)[i].name, candidates[j]);
                (*ptrArr)[i].vote += 1;
            }
        }
        printf("%s have vote [%d]\n", (*ptrArr)[i].name, (*ptrArr)[i].vote);
    }
}
