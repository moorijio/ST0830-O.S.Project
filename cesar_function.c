#include "cesar_function.h"
#include "constants.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char message[MAX_STRING];
int key;
int i;
int state;
int skip = 0;

void continue_() {
    printf("\n\n");
    printf("Premi qualsiasi tasto per continuare, tranne quello di accensione...\n");
    PAUSE
    fflush(stdin);
}

void encrypt(void) {
    do {
        state = 0;
        system("clear");
        printf("Inserisci il messaggio da cifrare: ");
        scanf("%s", message);

        for (i = 0; i < strlen(message); i++) {
            if (message[i] < 32 || message[i] > 126) {
                printf("Non puoi inserire il carattere %c\n", message[i]);
                state = 1;
                PAUSE
                fflush(stdin);
                break;
            }
        }
    } while (state);

    do {
        printf("Inserisci la chiave di cifratura: ");
        scanf("%d", &key);
    } while (key < 1 || key > 10);
    printf("\n\n*---------------------------------------*\nMessaggio cifrato:\n");

    for (i = 0; i < strlen(message); i++, skip = 0) {
        if ((message[i] + key) > 126) {
            skip = 93;
        }
        printf("%c", message[i] + key - skip);
    }
    continue_();
}

void decrypt(void) {
    do {
        state = 0;
        system("clear");
        printf("Inserisci il messaggio da cifrare: ");
        scanf("%s", message);

        for (i = 0; i < strlen(message); i++) {
            if (message[i] < 32 || message[i] > 126) {
                printf("Non puoi inserire il carattere %c\n", message[i]);
                state = 1;
                PAUSE
                fflush(stdin);
                break;
            }
        }
    } while (state);

    do {
        printf("Inserisci la chiave di cifratura: ");
        scanf("%d", &key);
    } while (key < 1 || key > 10);
    printf("\n\n*---------------------------------------*\nMessaggio decifrato:\n");

    for (i = 0; i < strlen(message); i++, skip = 0) {
        if ((message[i] + key) < 32) {
            skip = 93;
        }
        printf("%c", message[i] - key + skip);
    }
    continue_();
}