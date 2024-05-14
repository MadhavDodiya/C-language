#include<stdio.h>

int main()
{
//	int a[]={10,20,30,40,50,60,70,80,90};
	
//	printf("%d",a[1]);
	
	
	char c[]={'m','a','d','h','a','v'};
	char a[]={'L','A','M','B','O','R','G','H','I','N','I'};
	
	int i,j,k;
	for(i=0;i<=10;i++)
	{
		for(k=10;k>=i;k--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%c ",c[j]);
		}
		printf("%c\n",a[i]);
	}	
	
//	printf("%c",c[0]);

//	int i;
//	for(i=0;i<=5;i++)
//	{
//		printf("%c",c[i]);
//	}

//	printf("%s",c);
}
