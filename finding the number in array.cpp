#include <stdio.h>
int main()
{
	int age[5]={33,69,44,3,91};
	int i;
	printf("Check the number 3 in the array");

	for(i=0; i<5; i++)
	{
		if(age[i] == 3)
		{
			printf("\n%d is found in array",i);
		}
		else
		{
			printf("\nNumber not found");
		}
		
	}
}
