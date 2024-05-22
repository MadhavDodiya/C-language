//9		10	1
//11	12	13
//14	15	16

#include<stdio.h>

int main()
{
	int a,b,c=9;
	
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			if(a==1 && b==3)
			{
				c=c-10;
				printf("%d\t",c);
				c=c+10;
			}
			else{
				printf("%d\t",c++);
			}
		}
		printf("\n");
	}
}
