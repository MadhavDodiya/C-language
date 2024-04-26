#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter password:");
	scanf("%d",&a);
	
	printf("Password : %d \n",a);
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("Valid password");
	}
	else
	{
		printf("Not valid password");
	}
	
}
