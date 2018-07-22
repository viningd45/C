
#include <stdio.h>
#include "func.h"

#define WORD_LENGTH 50

int main() 
{

	char userInput[WORD_LENGTH];
    char inputReversed[WORD_LENGTH];

	printf("Test to see if a word is a palindrome!\nEnter a word below...\n");
	scanf("%[^\n]s", userInput);

    if(isValidWord(userInput))
    {
        convertToLower(userInput);
        reverseString(userInput, inputReversed);
	    printf("The string you entered backwards is: %s\n", inputReversed);
	}
    else
    {
        printf("Not a valid word\n");
    }

    return 0;
}
