#include<stdio.h>
int main()
{
	float cels,Farh;
	printf("Enter the celsisus value:");
	scanf("%f",&cels);
	Farh=(9/5*cels)+32;
	printf("The temperature in celsisus to fahrenheit:%0.f",Farh);
}
