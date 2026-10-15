
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <=5; i++) {
        for (j = 1; j <=i; j++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    for (i = 2; i <= 3; i++) {
        for (j = 1; j <= 3 - i; j++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
