#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_SENTENCE 10
#define MAX_NAME_LENGTH 10

/*
 -------------
| chat Pseudo|
-------------

Army : Would you prefer to changed(help) the world?
John : Um... yes i prefer to be pharmacist i want to innovation the best medicine in this world.
Gow : But ah... i don't know what i want to prefer on this world.
Gow : Hey ! i know what i prefer now!! i prefer to be Enginner i want to create technology for help disabled people.
Army : Wow! That's so amazing ! 
Army : Ok this my turn, I prefer to change Education system.
John : Why ?? 
Gow : Wow ! that's is great!
Army : I'm so boring in Education system, When I grow up i would change it.
John : Amen ;;{ ^ };;
Gow : Amen ;;{ ^ };;

*/
int step[] = {1,2,3,3,1,1,2,3,1,2,3};
char chat[][MAX_SENTENCE] = {
     "Would you prefer to changed(help) the world?",
     "Um... yes i prefer to be pharmacist i want to innovation the best medicine in this world.",
     "But ah... i don't know what i want to prefer on this world.",
     "Hey ! i know what i prefer now!! i prefer to be Enginner i want to create technology for help disabled people.",
     "Wow! That's so amazing ! ",
     "Ok this my turn, I prefer to change Education system.",
     "Why ?? ",
     "Wow ! that's is great!",
     "I'm so boring in Education system, When I grow up i would change it.",
     "Amen ;;{ ^ };;",
     "Amen ;;{ ^ };;"
};


typedef struct {
	
	char name[MAX_NAME_LENGTH];
	int indexChat;
	char *chat[MAX_SENTENCE];

} Person;

void getName(Person *person, char name[]) {
	
	strcpy(person->name, name);
	
}

void getChat(Person *person, char text[]) {
	
	strcpy(person->chat[person->indexChat++], text);
	
}
void setup(Person *person, char chat[], int step[]) {
	int len_chat = sizeof(step) / sizeof (step[0]);
	printf("%d", len_chat);
}

int main(int argc, char *argv[]){
	
	person *array_chat[122];
	Person Army, John, Gow;
	getName(&Army, "Army");
	getName(&John, "John");
	getName(&Gow, "Gow");
	
	
		
	setup(&Army, &chat, step);
	delay(1000);
	exit(0);
}
