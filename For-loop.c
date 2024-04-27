#include<stdio.h>

int main()
{
	int a,b;
	for(a=5;b*=10;a*b)
	{
		printf("%d * %d = %d\n",a,b);
	}
}
