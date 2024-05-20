#include<stdio.h>

int main()
{
	int a=10;
	int* point = &a;
	
	printf("%d\n",a);
	
	printf("%p\n",&a);
	
	printf("%p\n",point);
}

