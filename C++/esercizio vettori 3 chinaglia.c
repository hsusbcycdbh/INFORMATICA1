#include <stdio.h>

// Funzione per caricare i valori da tastiera in un vettore
void caricaElementi(int array[], int dimensione) {
    int i; // Dichiarazione della variabile di controllo del ciclo
    // Messaggio per l'utente
    printf("Inserisci %d valori per il vettore:\n", dimensione);
    // Ciclo per acquisire i valori da tastiera
    for (i = 0; i < dimensione; i++) {
        scanf("%d", &array[i]); // Acquisizione del valore da tastiera
    }
}

int main() {
    int vettore[5]; // Dichiarazione di un vettore di lunghezza 5
    int i; // Dichiarazione della variabile di controllo del ciclo

    // Chiamata alla funzione per caricare i valori nel vettore
    caricaElementi(vettore, 5);

    // Stampa dei valori inseriti nel vettore
    printf("Valori del vettore inseriti:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");

    return 0;
}

