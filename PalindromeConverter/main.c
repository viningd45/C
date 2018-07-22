
#include <stdio.h>
#include "func.h"

#define WORD_LENGTH 50

int main() 
{
	char userInput[WORD_LENGTH];

	printf("Test to see if a word is a palindrome!\nEnter a word below...\n");
	scanf("%[^\n]s", userInput);

	printf("The length of the word you entered is: %d\n", stringLength(userInput));
	return 0;
}
