#include<stdio.h>
#include<math.h>
int main()
{
    int num,ans;
    printf("Enter any number: ");
    scanf("%d",&num);
    ans=pow(num,0.5);
    printf("\n Square root of %d is: %d",num,ans);
    return 0;
}

