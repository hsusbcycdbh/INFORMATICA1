#include <stdio.h>

#define DIMENSIONE 3

int main() {
    char matrice[DIMENSIONE][DIMENSIONE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char giocatore = 'X';
    int riga, colonna, mossaValida, vittoria = 0, mosseEffettuate = 0;
    int i, j;

    do {
        // Stampa la matrice di gioco
        for (i = 0; i < DIMENSIONE; i++) {
            printf(" --- --- ---\n");
            for (j = 0; j < DIMENSIONE; j++) {
                printf("| %c ", matrice[i][j]);
            }
            printf("|\n");
        }
        printf(" --- --- ---\n");

        // Chiedi all'utente di inserire la mossa
        do {
            printf("Giocatore %c, inserisci la riga (0-2) e la colonna (0-2) separate da uno spazio: ", giocatore);
            scanf("%d %d", &riga, &colonna);
            if (riga < 0 || riga >= DIMENSIONE || colonna < 0 || colonna >= DIMENSIONE || matrice[riga][colonna] != ' ') {
                printf("Mossa non valida. Riprova.\n");
                mossaValida = 0;
            } else {
                mossaValida = 1;
            }
        } while (!mossaValida);

        // Registra la mossa del giocatore nella matrice
        matrice[riga][colonna] = giocatore;
        mosseEffettuate++;

        // Controlla se il giocatore ha vinto
        vittoria = 0;
        for (i = 0; i < DIMENSIONE && !vittoria; i++) {
            if ((matrice[i][0] == giocatore && matrice[i][1] == giocatore && matrice[i][2] == giocatore) ||
                (matrice[0][i] == giocatore && matrice[1][i] == giocatore && matrice[2][i] == giocatore) ||
                (matrice[0][0] == giocatore && matrice[1][1] == giocatore && matrice[2][2] == giocatore) ||
                (matrice[0][2] == giocatore && matrice[1][1] == giocatore && matrice[2][0] == giocatore)) {
                vittoria = 1;
            }
        }

        // Cambia il giocatore per il prossimo turno
        giocatore = (giocatore == 'X') ? 'O' : 'X';

    } while (!vittoria && mosseEffettuate < DIMENSIONE * DIMENSIONE);

    // Stampa il risultato della partita
    for (i = 0; i < DIMENSIONE; i++) {
        printf(" --- --- ---\n");
        for (j = 0; j < DIMENSIONE; j++) {
            printf("| %c ", matrice[i][j]);
        }
        printf("|\n");
    }
    printf(" --- --- ---\n");
    if (vittoria) {
        printf("Il giocatore %c ha vinto!\n", giocatore);
    } else {
        printf("La partita è finita in pareggio.\n");
    }

    return 0;
}
