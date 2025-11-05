#include<stdio.h>
int main()
{
	float radius,area;
	printf("Enter the radius number:");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("The area of a circle:%2f",area);
}