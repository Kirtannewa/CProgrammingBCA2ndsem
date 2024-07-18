#include<stdio.h>
int addition(int , int );
int sum;
int main()
{
	int num1,num2,add;
	printf("Enter any two interger:");
	scanf("%d%d",&num1,&num2);
	add = addition(num1,num2);
	printf("Sum of the given two interger is %d",add);
	return 0;
}


int addition(int a, int b)
{
	sum = a + b;
	return sum;
}
