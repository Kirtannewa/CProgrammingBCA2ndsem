#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Enter any two interger:");
	scanf("%d%d",&num1,&num2);\
	if(num1>num2)
	{
		printf("The number %d is greater",num1);
	}
	else
	{
		printf("The number %d is greater",num2);
	}
	if(num1<num2)
	{
		printf("\nThe number %d is smaller",num1);
	}
	else
	{
		printf("\nThe number %d is smaller",num2);
	}
}
