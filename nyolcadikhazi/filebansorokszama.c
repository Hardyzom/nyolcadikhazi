#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Hiba! Adja meg egy szöveges állomány nevét!\n");
        return 1;
    }
    FILE *fp;
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Hiba! A %s nevű file-t nem sikerült megnyitni!\n", argv[1]);
        return 2;
    }
    int szamol = 0;
    char line[100];
    while (fgets(line, 100, fp) != NULL) {
        szamol++;
    }
    printf("A fajl sorainak szama: %d\n", szamol);
    fclose(fp);
    return 0;
}
