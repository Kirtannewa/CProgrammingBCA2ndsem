//arragning the number in ascending order
#include <stdio.h>
int main()
{
	int age[5]={33,69,44,3,91};
	int i,j,temp;
	printf("Before sorting in ascending order\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t",age[i]);
	}

	for(i=0; i<5; i++)
	{
		for(j = i+1; j<5; j++)
		{
			if(age[i] > age[j])
			{
				temp = age[i];
				age[i] = age[j];
				age[j] = temp;
			}
		}	
	}
	printf("\n\nAfter sorting the nunmber in ascending order\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t",age[i]);
	}
	printf("\n\nAfter sorting the nunmber in decending order\n");
	for(i=4; i>=0; i--)
	{
		printf("%d\t",age[i]);
	}
	
}
