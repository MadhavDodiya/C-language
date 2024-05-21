#include<stdio.h>

int main()
{
//	FILE *a;
//	
//	a = fopen("if-else.txt","w");
//	
//	int i,j;
//	
//	if(i<=j){
//		fprintf(a,"get licence");
//	}
//	else
//	{
//		fprintf(a,"not licence");
//	}

	int i,j,k,a,b;
	
	printf("Enter value: ",a);
	scanf("%d",&a);
	
	printf("Enter value: ",b);
	scanf("%d",&b);
	
	for(i=a;i<=b;i++)
	{
		for(k=b;k>=i;k--)
		{
			printf(" ");
		}
		for(j=a;j<=i;j++)
		{
			printf("* ",j);
		}
		printf("\n");
	}

}
