#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter No. of Row =");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {for(col=n;col>=1;col--)
        printf("%d",col%2);
    printf("\n");
    }
}
