#include<stdio.h>
int main()
{
	int a,n=0,i;
	printf("Enter any interger:");
	scanf("%d",&a);
	for(i=1; i<=a; i++)
	{
		if(a%i==0)
		{
			n=n+1;
			
			continue;
		}
	}	
		if(n==2)
		{
			printf("%d is a prime number",a);
		}
		if(n!=2)
		{
			printf("%d is composite",a);
		}
		
	
}
