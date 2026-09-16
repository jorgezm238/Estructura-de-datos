/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=3;
    int *p = &x;
    
    x = 7;
    *p = *p +2;
    
    printf("%d\n",x);
    printf("%d\n",*p); 
    
    
    
}
