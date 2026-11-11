#include <stdio.h>

int main(void)
{
    int arr[100], n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    int greatestRight = arr[n - 1];
    arr[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--) {
        int current = arr[i];
        arr[i] = greatestRight;

        if (current > greatestRight) {
            greatestRight = current;
        }
    }

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}