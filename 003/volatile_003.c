/*
Changing value of const object.
Compile code with optimization option.
Compiler ignores changing of const object.
Now code size reduces.
*/
#include <stdio.h>
#define get_name(var) #var

int main(void)
{
    const volatile int var_local = 5;
    int *var_ptr = (int *)&var_local;
    printf("Initial value of %s : %d \n", get_name(var_local), var_local);
    *var_ptr = 100;
    printf("Modified value of %s : %d \n", get_name(var_local), var_local);
    return 0;
}

