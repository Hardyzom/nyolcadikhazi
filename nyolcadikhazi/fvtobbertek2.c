#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MERET 10

struct szamit{

    int min;
    int max;
    float atlag;
};

void cucc(int *arr, int meret, struct szamit *stats){

    int i;
    stats->min = stats->max = arr[0];
    stats->atlag = arr[0];
    for (i = 1; i < meret; i++) {
        if (arr[i] < stats->min) {
            stats->min = arr[i];
        }
        if (arr[i] > stats->max) {
            stats->max = arr[i];
        }
        stats->atlag += arr[i];
    }
    stats->atlag /= meret;
}

int main(){

    int i, arr[MERET];
    struct szamit stats;
    srand(time(NULL));
    for (i = 0; i < MERET; i++) {
        arr[i] = rand() % 90 + 10;
        printf("%d ", arr[i]);
    }

    printf("\n");

    cucc(arr, MERET, &stats);

    printf("Legkisebb elem: %d\n", stats.min);
    printf("Legnagyobb elem: %d\n", stats.max);
    printf("Az elemek átlaga: %.2f\n", stats.atlag);
    return 0;
}
