#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

void inizializzaVettore(int v[], int dim);
void stampaVettore(int v[], int dim);
void ordinaVettore(int v[], int dim);

int main() {
    int vettore[DIM];
    int i, j, temp;

    srand(time(NULL));

    printf("Vettore iniziale:\n");
    inizializzaVettore(vettore, DIM);
    stampaVettore(vettore, DIM);

    ordinaVettore(vettore, DIM);

    printf("\nVettore ordinato in modo crescente:\n");
    stampaVettore(vettore, DIM);

    return 0;
}

void inizializzaVettore(int v[], int dim) {
    int i;
    for (i = 0; i < dim; i++) {
        v[i] = rand() % 100;
    }
}

void stampaVettore(int v[], int dim) {
    int i;
    for (i = 0; i < dim; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void ordinaVettore(int v[], int dim) {
    int i, j, temp;
    for (i = 0; i < dim - 1; i++) {
        for (j = 0; j < dim - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}
