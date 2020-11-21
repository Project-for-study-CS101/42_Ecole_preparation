#include <stdio.h>
#include <string.h>


typedef struct 
{
    char  name[10];
    int vote;
} Can;

void SetCandidate(Can (*candidateArray)[], int length, char * name[]);
char * stringClear(char (*name)[]);



int main(int argv, char * candidates[])
{   
    
    int round; 
    argv--;
    Can can[argv];
    SetCandidate(&can, argv, candidates);
    scanf("%d", &round);
    getchar(); //clear buffer

    char name_vote_card[10];

    for (round; round > 0; round--)
    {
        fgets(name_vote_card, 10, stdin);
        //

        
        strcpy(name_vote_card, stringClear(&name_vote_card));
        printf("name = %s\n", name_vote_card);
        int i = 1;
        for (i; i <= argv; i++) {

            // PRoblem HerE!!!
            if (!strcmp(candidates[i], name_vote_card)) {
                printf("Error Candidate name undefined\n");
                return -1;
            }

            // correct score //DOING
            else {
                can[i].vote += 1;
            }
        }

    }
    argv--;
    int i;
    for (i = 0; i < argv; i++) {

        if (can[i].vote > can[i+1].vote) {
            strcpy(name_vote_card, can[i].name);
        }
        else {
            strcpy(name_vote_card, can[i+1].name);
        }
         

        

    }
    printf("winner is %s\n", name_vote_card);
    return 0;
    
}



char * stringClear(char (*name)[]) {
    int length = strlen(*name);
    (*name)[--length] = '\0';
    return *name;
}

void SetCandidate(Can (*candidateArray)[], int length, char * name[]){
    int i;
    
    for (i = 1; i < length; i++) {
        
        strcpy((*candidateArray)[i].name, name[i+1]);
        
        (*candidateArray)[i].vote = 0;
        
    }

   
}
