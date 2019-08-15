/*
    calloc()

    calloc() is like malloc(), except that it clears the memory to zero for you.
    
    It takes two parameters, the number of elements you want allocated and the size of each element.

    Below, notice the difference in output between the malloc and calloc.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *a;
    int *b;

    a = (int *) malloc(sizeof(int) * 3);    // allocate memory for 3 ints
    b = (int *) calloc(3, sizeof(int));     // allocate memory for 3 ints, but set them to 0 first

    int i, j;

    // print contents of memory block a (who knows what the values will be?)
    for (i = 0; i < 3; i++) {
        printf("%d\n", *(a + i));
    }

    printf("--------------------\n");

    // print contents of memory block b (should be all 0)
    for (j = 0; j < 3; j++) {
        printf("%d\n", *(b + j));
    }

    free(a);
    free(b);

    return 0;
}