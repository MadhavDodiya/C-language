#include<stdio.h>

int main()
{
	
FILE *A;

A = fopen("filename.txt", "w");


fprintf(A, "Some text");


fclose(A);
}
