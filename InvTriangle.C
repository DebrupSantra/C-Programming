#include<stdio.h>
int main()
{
    int i,j,k,space;
    for(i=5;i>=1;i--)
    {
        for(space=i;space<=5;space++)
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