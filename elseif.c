#include<stdio.h>

int main()
{
int a;
printf("entre the value of a:");
scanf("%d",&a);
int b;
printf("entre the value of b:");
scanf("%d",&b);
int c;
printf("entre the value of c:");
scanf("%d",&c);

//	if(a>=90 && a<=100)
//	{
//		printf("your grade is:A");
//	}
//	else if(a>=80 && a<90)
//	{
//		printf("your grade is :B");
//	}
//	else if(a>=70 && a<80)
//	{
//		printf("your grade is :C");
//	}
//	else if(a>=60 && a<70)
//	{
//		printf("your grade is :D");
//	}
//	else{
//		printf("you are fail:");
//	}
//	
	
	
	
	if(a==b)
	{
		printf("a ans b are same but c and a is not same:");
		if(a==c)
		{
			printf("tringle is right:");
		}
	}
	else{
		printf("not tringle:");
	}
}
