/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=10;
    int *p = &x;
    int *q = p;
    
    *p = 20;
    *q = 30;
    
    printf("x = %d\n",x);
    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    
    
    
}
