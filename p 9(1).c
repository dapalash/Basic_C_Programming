#include<stdio.h>
int main()
{
float celsius,fahrenheit;
printf("\nEnter temperature in Fahrenheit:");
scanf("%f",&fahrenheit);
celsius=(fahrenheit - 32)*5/9;
printf("\nCelsius = %.3f",celsius); //.3f means correct to 3 decimal places
}

