#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter No. of Row =");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {for(col=1;col<=n;col++)
        printf("%d",row);
    printf("\n");
    }
}
