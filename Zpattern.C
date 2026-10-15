#include <stdio.h>

int main(void) {
    int row, col;

    for (row = 0; row < 5; row++) {
        for (col = 0; col < 5; col++) {
            if (row == 0 || row == 4) {
                printf("%2d ", col + 1);
            } else if (col == 4 - row) {
                printf("%2d ", 5 - row);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}