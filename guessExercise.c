#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	char userName[20];
	int answer;
	int attemps = 0;
	int guess;
	bool keepGoing;

	srand(time(NULL));
	printf("Hi, What is your name? ");
	scanf("%s", userName);
	printf("Hello %s. Try to guess a number between 1 and 100." + userName);

	
