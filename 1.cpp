/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=100;
    int *p = &x;
    
    printf("Antes x= %d\n", x);
    *p=20;
    
    printf("Despues x= %d\n", x);
 
    
    
}
