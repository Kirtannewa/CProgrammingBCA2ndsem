#include <stdio.h>
int main()
{
	int num1, num2, num3;
	printf("Enter any three interger:");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num2>num3)
		{
			printf("The number %d is greater",num1);
		}
		else
		{
			printf("The number %d is greater",num2);
		}
	}
	if(num3>num2)
	{
		if(num3>num1)
		{
			printf("The number %d is greater",num3);
		}
		
		
	}

}
