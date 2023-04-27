#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MERET 10

void cucc(int *arr, int meret, int *min, int *max, float *atlag){

    int i;
    *min = *max = arr[0];
    *atlag = arr[0];
    for (i = 1; i < meret; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
        *atlag += arr[i];
    }
    *atlag /= meret;
}

int main(){
    
    int i, arr[MERET], min, max;
    float atlag;
    srand(time(NULL));

    for (i = 0; i < MERET; i++){
        arr[i] = rand() % 90 + 10;
        printf("%d ", arr[i]);
    }

    printf("\n");

    cucc(arr, MERET, &min, &max, &atlag);

    printf("Legkisebb elem: %d\n", min);
    printf("Legnagyobb elem: %d\n", max);
    printf("Az elemek átlaga: %.2f\n", atlag);

    return 0;
}
