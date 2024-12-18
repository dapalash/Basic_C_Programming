#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter No. of Row =");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {for(col=1;col<=n-row;col++)
       printf(" ");
     for(col=1;col<=n;col++)
    {if (row==1 || row==n || col==1 || col==n)
           printf("*");
        else
            printf(" ");}
printf("\n");
    }}

