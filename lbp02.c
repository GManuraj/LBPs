#include<stdio.h>
int main()
{
	float Cels,Fahr;
	printf("Enter the Fahrenheit value:");
	scanf("%f",&Fahr);
	Cels=(Fahr-32)*0.55;
	printf("The temperature in fahrenheit to celsisus:%.0f",Cels);
}