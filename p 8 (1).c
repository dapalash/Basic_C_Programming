#include<stdio.h>
int main()
{
 float  c,f;
printf("Please Enter temperature in Celsius:  ");
scanf("%f", &c);

f=(1.8*c)+32;

printf("\n %.2f Celsius = %.2f Fahrenheit", c, f);
return 0;
}

