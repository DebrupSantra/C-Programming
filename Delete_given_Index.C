#include <stdio.h>

int main(void)
{
    int arr[100], n, index;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index to delete: ");
    if (scanf("%d", &index) != 1 || index < 0 || index >= n) {
        printf("Invalid index.\n");
        return 1;
    }

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
