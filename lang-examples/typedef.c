/*
    typedef

    typedef allows you to make an alias for a certain type. This allows you to reference
    that type by the alias name.
*/

#include <stdio.h>

struct a_struct_with_a_massively_large_name {
    int a;
    char b;
};

typedef struct a_struct_with_a_massively_large_name THESTRUCT;

/* We can also typdef "anonymous" structs */
typedef struct {
    float gas;
    char * name;
} car;

int main(void)
{
    /* make a variable of the structure like this: */
    struct a_struct_with_a_massively_large_name a_variable;

    /* OR, use the alias you made with typedef */
    THESTRUCT another_variable;

    /* here we are using the anonymous struct 'car' that we gave an alias to */
    car myCar;
    myCar.gas = 32.2;
    myCar.name = "The Red Roadster";

    printf("The car called %s has %.2f gallons of gas left.\n", myCar.name, myCar.gas);

    return 0;
}