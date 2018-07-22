
#include <stdio.h>
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
