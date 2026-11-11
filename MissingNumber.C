#include<stdio.h>

int main()
{
    int arr[100], n, num;       


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
    printf("Enter the number to search: ");
    scanf("%d", &num);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Number found in the array.\n");
    } else {
        printf("Number not found in the array.\n");
    }

    return 0;
}