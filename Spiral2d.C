
#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("Enter array elements:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;

    printf("Spiral Order: ");

    while (top <= bottom && left <= right)
    {
        // 1. Traverse left to right
        for (int j = left; j <= right; j++)
            printf("%d ", arr[top][j]);

        top++;

        // 2. Traverse top to bottom
        for (int i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);

        right--;

        // 3. Traverse right to left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                printf("%d ", arr[bottom][j]);

            bottom--;
        }

        // 4. Traverse bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);

            left++;
        }
    }

    return 0;
}
