#include<stdio.h>

int result(int x);

int main()
{
	int num1, answer;
	printf("Enter any integer: ");
	scanf("%d", &num1);
	answer = result(num1);
	if(answer == 2)
	{
		printf("The number is prime\n");
	}
	else
	{
		printf("The number is composite\n");
	}
	return 0;
}

int result(int x)
{
	int n = 0, i;
	for(i = 1; i <= x; i++)
	{
		if(x % i == 0)
		{
			n = n + 1;
		}
	}
	return n;
}

