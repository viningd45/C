
#include <stdio.h>

#define WORD_LENGTH 50

int main() 
{
	char userInput[WORD_LENGTH];
	
	printf("Test to see if a word is a palindrome!\nEnter a word below...\n");
	scanf("%s", userInput);
	
	printf("The word you entered is: %s", userInput);
	return 0;
}	