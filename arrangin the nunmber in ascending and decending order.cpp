//arragning the number in ascending order
#include <stdio.h>
int main()
{
	int age[5]={33,69,44,3,91};
	int i,j,temp;
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
	printf("\nthe largest number is %d\n",age[4]);
	printf("\nthe smallest number is %d\n",age[0]);
	printf("\nthe second largest number is %d\n",age[i-2]);
	
}
