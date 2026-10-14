
#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 1; s <= (n - i) * 6; s++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            printf("      ");
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
            if (j > 1) {
                printf("      ");
            }
        }

        printf("\n");
    }

    return 0;
}
