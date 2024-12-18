#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter No. of Row =");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {for(col=n;col>=1;col--)
    {if (col==1||col==n||row==1||row==n)
        printf("1");
        else
            printf("0");}
    printf("\n");
    }
}
