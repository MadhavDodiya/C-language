#include<stdio.h>

int main()
{
	FILE *a;
	
	a = fopen("first.txt","a");
	
	fprintf(a," wroooooooooooom ");
	
//	char b[100];
//	
//	fgets(b,100,a);
//	
//	printf("%s",);
	
	fclose(a);
}
