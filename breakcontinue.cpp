#include<stdio.h>

int main()
{
	
//*
//***
//*****
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			if(i==2 || i==4)
//			{
//				continue;
//			}
//			printf("*");
//		}
//	printf("\n");
//	}

//1
//22
//4444

//	int a,b;
//	
//	for(a=1;a<=4;a++)
//	{
//		for(b=1;b<=a;b++)
//		{
//			if(a==3)
//			{
//				continue;
//			}
//			printf("%d",a);
//		}
//		printf("\n");
//	}
	
//4
//4321

	int a,b;
	
	for(a=4;a>=1;a--)
	{
		for(b=4;b>=a;b--)
		{
			if(a==2 || a==3)
			{
				continue;
			}
			printf("%d",b);
		}
		printf("\n");
	}

}



