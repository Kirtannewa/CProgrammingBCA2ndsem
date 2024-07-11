//program to store first 5 value in array and display it

#include <stdio.h>
int main()
{
	int age[100], size, i;
	printf("Enter arrary size:");
	scanf("\n%d",&size);
	printf("Enter elements\n");
	for(i = 0; i<size; i++)
	{
		printf("Array at %d position:",i);
		scanf("\n%d",&age[i]);
	}
	printf("\nArray elemets are\t");
	for(i = 0; i<size; i++)
	{
		printf("%d\t",age[i]);
	}
	return 0;
}
