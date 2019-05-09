/*
    Arrays

    C, of course, has arrays. When declaring an array, you define the type, name, and number of items in it.
    (Reminder: an array is a continuous chunk of memory that holds values of the same data type.)

    An array's index starts at 0. Access an element of an array with square brackets [].

    When you pass an array to a function, you're really passing a pointer to the first item in the array.
*/

#include <stdio.h>

/* print an integer array */
void printIntArray(int theArray[], int count) {
    int i = 0;
    for (i = 0; i < count; i++)
        printf("%d ", theArray[i]);
}

int main(void)
{
    /* create the 'numbers' array */
    int numbers[5] = {1, 2, 3, 4, 5};

    /* print the 'numbers' array */
    int i = 0;
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
        numbers[i] += 5;            /* Add 5 to each after printing, so we can
                                       see the difference in values the next time we print. */
    }
    printf("\n");

    printIntArray(numbers, 5);      /* Notice, we don't use the square brackets [] here.
                                       A pointer is being added to the stack; we aren't copying
                                       the entire array here. */

    return 0;
}