#include<stdio.h>

int main()
{
	int a,b;

	
	printf("Enter password:");
	scanf("%d",&a);
	
	printf("Password : %d \n",a);
	printf("enter the password:");
	scanf("%d",&b);
	
	
	if(a==b)
	{
		printf("Valid password \n");
	}
	else
	{
		printf("re-enter password \n");
		scanf("%d",&b);
		
		if(a==b)
		{
			printf("Valid password \n");
		}
		else
		{
				printf("re-enter password \n");
				scanf("%d",&b);
		
				if(a==b)
				{
					printf("Valid password \n");
				}
				else{
					printf("exit:");
				}
		}
	}
	
}
