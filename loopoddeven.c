#include<stdio.h>

int main()
{
//	int a,b,c,d;
//	
//	printf("Enter value: ");
//	scanf("%d",&a);
//	
//	printf("Enter value: ");
//	scanf("%d",&b);
//	
//	for(c=a;c<=b;c++)
//	{
//		if(c%2==0)
//	{
//		printf("%d",c);
//	}
//		printf("\t");
//	}

int a,b,c,row;

printf("Enter value : ");
scanf("%d",&row);
printf("\n");

for(a=1;a<=row;a++)
{
	if(a%2!=0)
		c=1;
	else
		c=0;
	for(b=1;b<=a;b++)
	{
		printf("%d",c);
		if(c==1)
			c=0;
		else
			c=1;
	}
	printf("\n");
}
}

