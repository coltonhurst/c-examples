/*
    malloc()

    In C, you can allocate memory. You do this with malloc() !

    Below, we make an int pointer p and allocate enough memory to hold 5 integers.

    malloc() accepts how much memory you want in bytes as a parameter, so often
    people will use sizeof() and multiply it by a number to make it simpler.

    malloc() will return a void pointer to the first memory location
    where the blocks have been allocated. You should cast that void pointer
    into the appropriate pointer type. Below, we cast it to an int pointer.

    Notice we also use free() on line 36 to give back our allocated memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;     /* int pointer p */

    p = (int *) malloc(sizeof(int) * 5);    /* allocate space for 5 ints */

    /* loop through 5 iterations, from 0 to 4,
       and set our new memory accordingly */
    int i;
    for (i = 0; i < 5; i++) {
        *p = i;     /* set the value of the current mem location to i */
        printf("%d ", *p);
        p++;        /* go to the next block in memory from the current location */
    }

    free(p - i); /* free our allocated memory, we're done with it! */

    return 0;
}