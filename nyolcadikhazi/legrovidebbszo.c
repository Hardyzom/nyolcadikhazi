#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Hiba: legalább egy szóra van szükség!\n");
        return 1;
    }

    int i, j, min_len;
    char *min_words[argc-1];

    for (i = 1; i < argc; i++) {
        if (i == 1) {
            min_len = strlen(argv[1]);
            min_words[0] = argv[1];
        } else {
            int len = strlen(argv[i]);
            if (len < min_len) {
                min_len = len;
                min_words[0] = argv[i];
                j = 1;
            } else if (len == min_len) {
                min_words[j++] = argv[i];
            }
        }
    }

    for (i = 0; i < j; i++) {
        printf("%s\n", min_words[i]);
    }

    return 0;
}
