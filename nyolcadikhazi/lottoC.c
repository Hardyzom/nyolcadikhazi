#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int also, felso, darab;
    printf("Hány db random számot kérsz?\n");
    scanf("%d", &darab);

    printf("Alsó határ: ");
    scanf("%d", &also);

    printf("Felső határ: ");
    scanf("%d", &felso);

    srand(time(NULL));

    if (felso <= also) {
        printf("A felső határnak nagyobbnak kell lennie az alsó határnál!\n");
        return 1;
    }

    if (darab > felso - also) {
        printf("A generálandó számok darabszáma nem lehet nagyobb az intervallum hosszánál!\n");
        darab = felso - also;
    }

    int szamok[darab];
    int i, j, tmp;

    for (i = 0; i < darab; i++) {
        szamok[i] = rand() % (felso - also) + also;
        for (j = 0; j < i; j++) {
            if (szamok[i] == szamok[j]) {
                i--;
                break;
            }
        }
    }

    for (i = 0; i < darab - 1; i++) {
        for (j = i + 1; j < darab; j++) {
            if (szamok[i] > szamok[j]) {
                tmp = szamok[i];
                szamok[i] = szamok[j];
                szamok[j] = tmp;
            }
        }
    }

    printf("A generált számok: ");
    for (i = 0; i < darab; i++) {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    return 0;
}
