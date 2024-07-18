#include <stdio.h>

int num1;
int result(); 
int main()
{
    int answer;
    printf("Enter an integer: ");
    scanf("%d", &num1); 
    answer = result(); 
    if (answer == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
}

int result() 
{
	int z;
	z = num1 % 2;
    return z; 
}
