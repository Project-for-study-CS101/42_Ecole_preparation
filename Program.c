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
bool haveMember_in_Card(char * name, Candidate (*ptrArr)[], int length);
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
        //vote
        fgets(vote_card, LIMIT_NAME_LENGTH, stdin);
        cleanString(&vote_card); //clear newline in vote_card array

        //CURRENT WORK HERE
        
    }

    Loop_thought_member(argc, &card_voted_array, round, argv);
    
    exit(EXIT_SUCCESS);
} //END PROGRAM

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

bool haveMember_in_Card(char * name, Candidate (*ptrArr)[], int length )
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (strcmp((*ptrArr)[i].name, name))
        {
            return false; // if have member   
        }
    }
    return true;
}

void Loop_thought_member(char * candidates[], Candidate (*ptrArr)[], int length_card_array, int length_of_candidate)
{
   
    int i =0;
    for (i = 0; i < length_card_array; i++) {
        printf("[%d] name = %s\n", i, (*ptrArr)[i].name);
    }
}
