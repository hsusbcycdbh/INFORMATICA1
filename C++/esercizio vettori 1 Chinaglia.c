#include <stdio.h>

void inizializzaZero(int vettore[], int dimensione) {
    // Non è necessario fare nulla, poiché gli elementi del vettore sono già stati inizializzati a 0
}

int main() {
    int dimensione = 25; // Dimensione del vettore
    int vettore[dimensione]; // Dichiarazione del vettore senza inizializzarlo
    
    // Inizializzazione del vettore con zeri
    int i; // Dichiarazione della variabile i fuori dal ciclo for
    for (i = 0; i < dimensione; i++) {
        vettore[i] = 0;
    }
    
    // Stampa del vettore inizializzato (tutti gli elementi saranno 0)
    printf("Vettore inizializzato con zero:\n");
    for (i = 0; i < dimensione; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
    
    return 0;
}

