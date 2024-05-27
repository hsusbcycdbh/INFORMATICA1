#include <stdio.h>

// Funzione per il calcolo del fattoriale
unsigned long long calcolaFattoriale(int num) {
    unsigned long long fattoriale = 1;
    int i;

    for (i = 1; i <= num; ++i) {
        fattoriale *= i;
    }
    return fattoriale;
}

int main() {
    int num;
    unsigned long long risultato;

    // Input del numero da parte dell'utente
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &num);

    // Verifica se il numero inserito è negativo
    if (num < 0) {
        printf("Il fattoriale di un numero negativo non è definito.\n");
        return 1;
    }

    // Calcolo del fattoriale
    risultato = calcolaFattoriale(num);

    // Stampare il risultato
    printf("Il fattoriale di %d è: %llu\n", num, risultato);

    return 0;
}


