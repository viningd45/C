
#include <stdio.h>
#include <ctype.h>
#include "func.h"

int stringLength(char * input)
{
    int i = 1;

    if(*(input) == '\0')
    {
        return 0;
    }
    else
    {
        int z = 0;
	    for(i; *(input + i) != '\0'; i++)
        {
            z++;
        }

	    return i;
    }
}

void reverseString(char * string, char * reversedString)
{
    int j = 0;
    for(int i = stringLength(string) - 1; i >= 0; i--)
    {
        reversedString[j] = string[i];
        j++;
    }
}

int isValidWord(char * word)
{
    for(int i = 0; i < stringLength(word); i++)
    {
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z') || word[i] == ' ')
        {
            continue;
        } else return 0;
    }
    return 1;
}

void convertToLower(char * word)
{
    for(int i = 0; i < stringLength(word); i++)
    {
        word[i] = tolower(word[i]);
    }
}

int isPalindrome(char * word)
{
    convertToLower(word);
    char reversed[stringLength(word)];

    reverseString(word, reversed);

    for(int i = 0; i < stringLength(word); i++)
    {
        if(word[i] == reversed[i])
        {
            continue;
        } else return 0;
    }

    return 1;
}
