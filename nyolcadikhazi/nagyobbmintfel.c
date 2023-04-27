#include <stdio.h>

int main() {
    FILE *in_fp, *out_fp;
    double szam;

    in_fp = fopen("in.txt", "r");
    if (in_fp == NULL) {
        printf("Hiba: Az in.txt fajl nem nyithato meg!\n");
        return 1;
    }

    out_fp = fopen("out.txt", "w");
    if (out_fp == NULL) {
        printf("Hiba: Az out.txt fajl nem nyithato meg!\n");
        fclose(in_fp);
        return 1;
    }

    printf("Az in.txt fajl feldolgozasa...\n");

    while (fscanf(in_fp, "%lf", &szam) == 1) {
        if (szam > 0.5) {
            fprintf(out_fp, "%.2lf\n", szam);
        }
    }

    printf("in.txt sikeresen megnyitva\n");
    printf("0,5-nél nagyobb számok szűrése...\n");
    printf("szűrés vége\n");
    printf("out.txt bezárva\n");



    fclose(in_fp);
    fclose(out_fp);


    return 0;
}
