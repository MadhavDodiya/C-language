#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter Number a: ");
	scanf("%d",&a);
	
	printf("Enter number b: ");
	scanf("%d",&b);
	
	printf("Enter number c: ");
	scanf("%d",&c);
	
	if(a==b && a==c && b==c)
	{
		printf("This is tringle");
	}
	else
	{
		printf("This is not tringle");
	}
}
