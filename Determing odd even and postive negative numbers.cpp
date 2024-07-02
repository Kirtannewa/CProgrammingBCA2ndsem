#include<stdio.h>
int opt, num1;
char count;
int main()
{
	printf("***************************************\n");
	printf("Determing odd even and postive negative numbers\n");
	
	do{
	printf("\nEnter your interger:");
	scanf("%d",&num1);
	printf("Options:\n");
	
	printf("1.Odd & Even\n");
	printf("2.Positive & Negative\n");
	
	printf("\nEnter your choice:\n");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
			if(num1%2 == 0)
			{
				printf("The number %d is even",num1);
			}
			else 
			{
				printf("THe number %d is odd",num1);
			}
			
		break;
		
		case 2:
			if(num1>0)
			{
				printf("The number %d is positive",num1);
			}
			else if(num1 == 0)
			{
				printf("The number %d is zero",num1);
			}
			else 
			{
				printf("THe number %d is negative",num1);
			}
		default:
		printf("Invalid");			
	}	
	printf("\nDo you want to continue [Y/N]:");
	scanf(" %c",&count);
	}while(count == 'Y' || count == 'y');
	printf("\n-----Thank you-----");
	return 0;	
}
