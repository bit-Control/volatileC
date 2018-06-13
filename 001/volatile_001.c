/*
Changing value of const object.
Compile code without optimization option.
Hence value of const object will be changed  
*/
#include <stdio.h>
#define get_name(var) #var

int main(void)
{
    const int var_local = 5;
    int *var_ptr = (int*) &var_local;
    printf("Initial value of %s : %d \n", get_name(var_local), var_local);
    *var_ptr = 100;
    printf("Modified value of %s : %d \n", get_name(var_local), var_local);
    return 0;
}
