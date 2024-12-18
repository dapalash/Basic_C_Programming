#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter No. of Row =");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {for(col=n;col>=row;col--)
    {if (row==1 || col==1 || col==row || col==n)
           printf("*");
        else
            printf(" ");
    }printf("\n");
    }}



