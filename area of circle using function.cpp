//area of circle using a return type function with parameter

#include<stdio.h>
#define Pi 3.14
float area(int);

int main()
{
	float r, a;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	a = area(r);
	printf("The area of cicrle is %.2f",a);
}

float area(int x)
{
	float z;
	z= Pi*x*x;
	return z;
}

