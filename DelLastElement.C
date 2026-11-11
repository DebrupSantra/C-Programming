#include <stdio.h>

int main(void)
{
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 

    printf("Array after deletion: ");
    for (int i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}