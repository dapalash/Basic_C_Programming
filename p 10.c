#include<stdio.h>
int main()
{
int n,d,y,w;
printf("Enter the number of days: ");
scanf("%d",&n);

y=(n/365);
w=(n%365)/7;
d=n-((y* 365)+(w*7));

printf("Year=%d \n Week=%d\n Day=%d",y,w,d);
return 0;
}

