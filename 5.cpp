/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=10;
    int y = 20;
    int *p = &x;
 
 
 printf("El puntero p esta apuntado a : %d\n",*p);
 
 p = &y; //como no esta el asterisco esta apuntando a la direccion de memoria
 
 printf("El puntero p esta apuntado a : %d\n",*p);
    
    
    
}
