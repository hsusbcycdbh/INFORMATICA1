#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSIONE 15

int main() {
    int vettore[DIMENSIONE];
    int elementoCercato;
    int i;
    int trovato = 0;

    // Inizializza il vettore con valori pseudocasuali
    srand(time(NULL));
    for (i = 0; i < DIMENSIONE; i++) {
        vettore[i] = rand() % 100;
    }

    // Stampa il vettore
    printf("Vettore inizializzato:\n");
    for (i = 0; i < DIMENSIONE; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");

    // Chiedi all'utente l'elemento da ricercare
    printf("\nInserisci l'elemento da ricercare: ");
    scanf("%d", &elementoCercato);

    // Esegui la ricerca sequenziale
    for (i = 0; i < DIMENSIONE && !trovato; i++) {
        if (vettore[i] == elementoCercato) {
            printf("L'elemento %d è presente nel vettore all'indice %d.\n", elementoCercato, i);
            trovato = 1;
        }
    }

    if (!trovato) {
        printf("L'elemento %d non è presente nel vettore.\n", elementoCercato);
    }

    return 0;
}
