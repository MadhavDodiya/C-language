#include<stdio.h>

int main()
{
//	h	e	t
//	n	i	b
//	a	r	g
//	c	p	u

	int a[4][3]={{'H','E','T'},{'N','I','B'},{'A','R','G'},{'C','P','U'}};
	
	printf("%c",a[0][0]);
	printf("%c-",a[1][1]);
	printf("%c",a[0][2]);
	printf("%c",a[0][1]);
	printf("%c",a[3][0]);
	printf("%c ",a[0][0]);
	printf("%c",a[1][2]);
	printf("%c",a[2][0]);
	printf("%c",a[3][1]);
	printf("%c",a[3][2]);
	printf("%c",a[1][0]);
	printf("%c",a[2][0]);
	printf("%c",a[2][2]);
	printf("%c",a[2][0]);
	printf("%c",a[2][1]);
	

}
