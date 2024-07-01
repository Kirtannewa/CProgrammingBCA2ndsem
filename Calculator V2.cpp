#include <stdio.h>
int main()
{
	int firstnumber, secondnumber, sum, difference, product;
	double division;
	char option;
	do{
	printf("Enter two input number: ");
	scanf("%d%d",&firstnumber,&secondnumber);
	sum = firstnumber + secondnumber;
	difference = firstnumber - secondnumber;
	product = firstnumber * secondnumber;
	division = (double)firstnumber / secondnumber;
	
	printf("The sum of %d and %d is %d\n", firstnumber,secondnumber,sum);
	printf("The difference of %d and %d is %d\n", firstnumber,secondnumber,difference);
	printf("The product of %d and %d is %d\n", firstnumber,secondnumber,product);
	printf("The division of %d and %d is %lf\n", firstnumber,secondnumber,division);
	
	printf("\nDo you want to continue?\n");
	printf("\nPress Y to continue and press any other key for exit\n");
	printf("\n");
	scanf(" %c",&option);
	}while(option == 'Y' || option == 'y');
	printf("-----Thank You-----");
	return 0;
}
