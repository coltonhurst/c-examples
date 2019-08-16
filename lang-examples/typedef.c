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

int main(void)
{
    /* make a variable of the structure like this: */
    struct a_struct_with_a_massively_large_name a_variable;

    /* OR, use the alias you made with typedef */
    THESTRUCT another_variable;

    return 0;
}