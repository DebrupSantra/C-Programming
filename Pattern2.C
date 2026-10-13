#include<stdio.h>
int main()
{
    int i,j,c=1,k,space=7;
    for(i=1;i<=5;i++)
    {
        space--;
        for(k=1;k<=space-1;k++)
        {
            if(c>10)
            {
                continue;
            }
            printf(" ");
           
        }
         for(j=1;j<=i;j++)
        {
            printf("%d ",c);
            c++;
        }
            
        printf("\n");
    }
    return 0;
}