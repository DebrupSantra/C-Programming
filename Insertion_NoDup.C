#include <stdio.h>

int main(void)
{
    int r, c, n;

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    int arr[r][c];

    printf("Enter array elements:\n");

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int duplicate;

            do {
                duplicate = 0;

                if (scanf("%d", &n) != 1) {
                    printf("Invalid input.\n");
                    return 1;
                }

                for (int x = 0; x <= i && !duplicate; x++) {
                    int limit = (x == i) ? j : c;

                    for (int y = 0; y < limit; y++) {
                        if (arr[x][y] == n) {
                            duplicate = 1;
                            printf("Duplicate value detected. Enter a different value: ");
                            break;
                        }
                    }
                }
            } while (duplicate);

            arr[i][j] = n;
        }
    }

    printf("Array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}