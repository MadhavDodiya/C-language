#include<stdio.h>

int main()
{
//	int a,b;
//	printf("Enter value: ");
//	scanf("%d",&b);
//	
//	for(a=1;a<=10;a++)
//	
//	printf("%d * %d = %d \n",b,a,b*a);

	int a,b,c,d;
	
	printf("Enter value: ");
	scanf("%d",&a);
	
	printf("Enter value: ");
	scanf("%d",&d);
	
	for(c=a;c<=d;c++)
	{
		for(b=1;b<=10;b++)
		{
			printf("%d * %d = %d \n",c,b,c*b);
		}
		printf("\n");
	}
}
