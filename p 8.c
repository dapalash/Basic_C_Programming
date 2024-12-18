#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter No. of Row =");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {for(col=1;col<=n;col++)
    {if (col==row || col+row==n+1)
           printf("%d",row);
        else
            printf(" ");
    }printf("\n");
    }}





