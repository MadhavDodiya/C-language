#include<stdio.h>

int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==2 || i==4)
			{
				continue;
			}
			printf("*");
		}
	printf("\n");
	}
}

//*
//***
//*****

