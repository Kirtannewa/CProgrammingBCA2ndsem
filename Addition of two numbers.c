#include<stdio.h>
int main()
{
	int firstnumber,secondnumber,sum;
	printf("Enter first and second input:\n");
	scanf("%d%d", &firstnumber,&secondnumber);
	sum=firstnumber+secondnumber;
	printf("The sum of two number %d and %d is %d", firstnumber, secondnumber, sum);
	return 0;
}
