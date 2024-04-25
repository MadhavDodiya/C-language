#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter Number : ");
	scanf("%d",&a);
	
	if(a%4==0)
	{
		printf("This is a leap year");
	}
	else
	{
		printf("This is not leap year");
	}
}
