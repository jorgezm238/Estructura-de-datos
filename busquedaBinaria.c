#include <stdio.h>

int busqueda_binaria(const int v[], int n, int x) {
int izq = 1;
int der = n;
int cen = (izq + der) / 2;
      while ((v[cen] != x) && (izq<der)) {
        if (v[cen] > x) {
            der = cen-1;
      }      else {
              izq = cen+1;
      }
      cen = (izq + der) / 2;
}
if (v[cen] == x) {
    return cen;
}
  return -1; //no existe una posición válida
} //return null si no existe una dirección/puntero válido

int main() {


}
