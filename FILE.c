#include<stdio.h>

int main()
{
	
 FILE *A;
 
 A = fopen("demo.txt","w");
 
 fprintf(A,"hello my name is madhav");
 fprintf(A,"hello my name is :done");
 
 fclose(A);

}
