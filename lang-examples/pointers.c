/*
    Pointers

    The infamous... pointers! Thankfully, they aren't too bad. But... be careful! :)
    This will contain a few examples, as these all relate to pointers...

    A pointer is just an address for some data in memory.

    sizeof() is an operator that gets the size of something in bytes
    & is the "address-of" operator. This gets the memory location where the variable's value is stored.
      Returns what would be in a pointer... the memory address of a variable!
    * is the "dereferencing" operator. This gets the value of the address a pointer is pointing to.
    %p is the format specifier for printf() for printing pointers
*/

#include <stdio.h>

int main(void)
{
    /* Here we use the sizeof() operator to get the size of an int and a long in bytes. */
    printf("An int with this compiler uses %d bytes\n", sizeof(int));
    printf("A long with this compiler uses %d bytes\n", sizeof(long));

    /* using the address-of operator to see where apples is stored in memory */
    int apples = 10;
    printf("We have %d apples, and the address of the value in memory is %p\n", apples, &apples);

    /* making an int pointer */
    int bananas = 12;
    int *intPointer = &bananas;

    /* intPointer is a pointer. Let's print some info about it... */
    printf("\n\nintPointer is a pointer to bananas (an int). It holds the address of bananas, %p, as its value.\n", intPointer);
    printf("When we dereference our intPointer like this: *intPointer,\n we get the value at the memory address it's holding: %d (The value of bananas)\n\n", *intPointer);
    printf("intPointer itself is stored at %p\n", &intPointer);
    printf("So... in summary:\n");
    printf(" - intPointer points to: %p (bananas' location)\n", intPointer);
    printf(" - intPointer points to the value: %d\n", *intPointer);
    printf(" - intPointer itself is at: %p\n", &intPointer);

    printf("\n\nAre you confused yet?\n");

    printf("Now, let's set the value of *intPointer to 100, and print bananas!\n");
    *intPointer = 100;
    printf("bananas is now %d\n", bananas);

    return 0;
}