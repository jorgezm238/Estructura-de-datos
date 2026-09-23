#include <stdio.h>

int busqueda_lineal(const int v[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {

    int v[10] = {3, 7, 12, 18, 21, 25, 30, 34, 42, 50};

    int posicion = busqueda_lineal(v, 10, 18);

    printf("La posicion de 18 es: %d\n", posicion);

    return 0;
}
