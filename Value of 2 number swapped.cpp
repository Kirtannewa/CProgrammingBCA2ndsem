#include<stdio.h>
int main()
{
	int firstnum,secondnum, swap;
	printf("Enter two interger:");
	scanf("%d%d",&firstnum,&secondnum);
	printf("Original value Num1=%d and Num2=%d",firstnum,secondnum);
	swap = firstnum;
	firstnum=secondnum;
	secondnum = swap;
	
	
	printf("\nSwapped value Num1=%d and Num2=%d",firstnum,secondnum);
	
}
