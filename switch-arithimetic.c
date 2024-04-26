#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter value a: ",a);
	scanf("%d",&a);
	
	printf("Enter value b: ",b);
	scanf("%d",&b);
	
	printf("Enter case c: ",c);
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
		printf("sum is :-> %d",a+b);
		break;
		
		case 2:
		printf("sub is :-> %d",a-b);
		break;
		
		case 3:
		printf("mul is :-> %d",a*b);
		break;
		
		case 4:
		printf("div is :-> %d",a/b);
		break;
		
		default:
			printf("NIKAL LAUDE");
			break;
	}
}
