#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	int turns = 0;
	int correct;
	int guess;
	char name[20];
	bool keepGoing;

	srand(time(NULL));

	printf("Please enter your name: ")

	scanf("%s", name);

	printf("Hello. %s. Let's play a game. \n");

	correct = (rand() % 100) + 1;

	printf("correct: %d", correct);

	return 0;
} // end main
