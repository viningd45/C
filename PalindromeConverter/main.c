
#include <stdio.h>
#include "../globalFunctions/func.h"

#define WORD_LENGTH 50

int main() 
{

	char userInput[WORD_LENGTH];

	printf("Test to see if a word is a palindrome!\nEnter a word below...\n");
	scanf("%[^\n]s", userInput);

    if(isValidWord(userInput))
    {
        convertToLower(userInput);
        char inputReversed[WORD_LENGTH];
        reverseString(userInput, inputReversed);
        if(isPalindrome(userInput))
        {
            printf("Word is a palindrome\n");
            printf("%s is the same as %s\n", inputReversed, userInput);
        }
        else
        {
            printf("Word is not a palindrome\n");
            printf("%s is not the same as %s\n", inputReversed, userInput);
        }
	}
    else
    {
        printf("Not a valid word\n");
    }

    return 0;
}
