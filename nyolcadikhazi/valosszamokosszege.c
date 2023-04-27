#include <stdio.h>

int main() {
    FILE *fp;
    double szam, osszeg = 0.0;

    fp = fopen("valos_szamok.txt", "r");
    if (fp == NULL) {
        printf("Hiba: A fajl nem nyithato meg!\n");
        return 1;
    }

    while (fscanf(fp, "%lf", &szam) == 1) {
        osszeg += szam;
    }

    printf("%.20lf\n", osszeg);

    fclose(fp);
    return 0;
}