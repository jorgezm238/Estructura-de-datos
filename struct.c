#include <stdio.h>



int main() {
  typedef struct {
          int id;
          char nombre[30];
          float nota;
          } Alumno;
          
      Alumno lista[10] = {
        {10, "Ana", 7.5f},
        {14, "Luis", 6.0f},
        {20, "Maria", 8.2f},
        {23, "Jorge", 5.9f},
        {27, "Lucia", 9.1f},
        {31, "Carlos", 6.7f},
        {35, "Elena", 7.0f},
        {44, "Rosa", 8.8f},
        {47, "Pablo", 5.5f},
        {60, "Sofia", 9.5f}
        
        };
        
        printf("Nota del primer alumno : %f\n", lista[0].nota);
          

}
