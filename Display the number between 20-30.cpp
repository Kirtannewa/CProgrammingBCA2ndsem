//dispaly age from 20-30
#include<stdio.h>
int main()
{
	int age[5]={40,20,26,19,33};
	int i, count=0;
	
	printf("The given age are");
	for(i = 0; i<5; i++)
	{
		printf("\t%d",age[i]);
	}
	
	printf("\nAge between 20-30 are");
	for(i = 0; i<5; i++)
	{
		if((age[i]>=20) && (age[i]<=30))
		{
		count = count + 1;
		printf("\t%d",age[i]);	
		} 
	}
	printf("\nTotal age found = %d",count);
	return 0;
}
