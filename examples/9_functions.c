/*
    Example 9

    Functions make C powerful. Think of a function like it would be in math... an ADD function might
    take two values, and return 1, the sum.

    When functions are called, the function needs to be known. If it's not defined prior to the calling
    location, there needs to be a function prototype. Think of this as the blueprint for the function.

    The header of the function defines the return type, function name, and any parameters required.
    Below are two function examples; one that returns an int, and one that doesn't return anything.
*/

#include <stdio.h>

int add(int num1, int num2);    /* The add functions prototype */

/*
    This function doesn't return anything.
*/
void sayHello() {
    printf("hello\n");
}

int main(void)
{
    int one = 5;
    int two = 10;

    printf("%d + %d = %d\n", one, two, add(one, two));

    sayHello(); /* doesn't need a prototype b/c it's defined above this line */

    return 0;
}

/*
    The add function. Takes two ints and returns an int
*/
int add(int num1, int num2) {
    return num1 + num2;
}