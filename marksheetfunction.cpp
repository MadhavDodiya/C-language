#include<stdio.h>

void mark(char name[],int roll,int math,int science,int english)
{
	printf("name student: %s",name);
	printf("\nroll no: %d",roll);
	printf("\nMathemetics mark: %d",math);
	printf("\nScience mark: %d",science);
	printf("\nEnglish mark: %d",english);
}

int main()
{
	mark("madhav",10,50,60,50);
}
