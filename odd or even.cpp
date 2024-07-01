#include <stdio.h>
int main()
{
	char option;
	int input;
	do{
	printf("Enter an interger : ");
	scanf("%d",&input);
	if (input%2 == 0)
	{
		printf("The number %d is even\n",input);
	}
	else
	{
		printf("The number %d is odd\n",input);
	}
	printf("\nDo you want to continue\n ");
	printf("\nPress Y for conintune and any other key for exit\n");
	printf("\n");
	scanf(" %c",&option);
	}while(option == 'Y' || option == 'y');
	printf("-----THANK YOU-----");
	return 0;
}
