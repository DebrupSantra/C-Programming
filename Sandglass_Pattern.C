#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 0; j < 4 + (5 - i); j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = 2; i <= 5; i++) {
        for (j = 0; j < 4 + (5 - i); j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}