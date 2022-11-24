#include "menu.h"
#include "cesar_function.h"
#include <stdio.h>
#include <stdlib.h>

void menu_text(void) {
    printf("*---------------------------------------*\n");
    printf("|              Menu A Scelta            |\n");
    printf("*---------------------------------------*\n");
    printf("|   1 - Cifratura message               *\n");
    printf("|   2 - Decifratura message             *\n");
    printf("|   3 - Esci                            *\n");
    printf("*---------------------------------------*\n");
    printf("|           Effettua una scelta:        |\n");
    printf("*---------------------------------------*\n");
}

void menu_switch(int choice) {
    switch (choice) {
        case 1:
            encrypt();
            break;
        case 2:
            decrypt();
            break;
        case 3:
            printf("Chiusura programma.\n");
            break;
        default:
            break;
    }
}

int menu_choice(void) {
    int choice = 0;
    do {
        system("clear");
        menu_text();
        while (scanf("%d", &choice) < 1 || choice > 3) {
            system("clear");
            menu_text();
            fflush(stdin);
            printf("Inserisci un'opzione compresa nel menu:\n");
            while (getchar() != '\n');
        }
        menu_switch(choice);
    } while (choice != 3);
    return choice;
}
