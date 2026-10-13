#include<stdio.h>
int main()
{
    int i,j,k,space=5;
    for(i=1;i<=5;i++)
    {
        space--;
        for(k=1;k<=space-1;k++)
        {
            printf(" ");
           
        }
         for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
            
        printf("\n");
    }
    return 0;
}