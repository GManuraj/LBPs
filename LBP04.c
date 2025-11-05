#include<stdio.h>
int main()
{
	float radius,volume;
	printf("Enter the radius number:");
	scanf("%f",&radius);
	volume=(4*3.14*radius*radius*radius)/3;
	printf("The volume of a sphere:%2f",volume);
}
