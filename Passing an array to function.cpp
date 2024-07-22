#include<stdio.h>
void printArray(int arr[], int size);
void sortArray(int arr[], int size);
int main()
{
	int array[] = {4,8,2,0,1};
	int size = sizeof (array) / sizeof (array[0]);
	sortArray(array,size);
	printArray(array,size);
	return 0;
}

void printArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void sortArray(int arr[], int size)
{
	int temp, i, j;
	for(i = 0; i<5; i++)
	{
		for(j = i+1; j<5; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}	
	}
}
