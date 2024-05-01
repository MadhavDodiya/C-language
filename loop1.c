#include<stdio.h>

int main()
{
//1
//12
//123
//1234

//int a,b;
//
//for(a=1;a<=4;a++)
//{
//	for(b=1;b<=a;b++)
//	{
//		printf("%d",b);
//	}
//	printf("\n");
//}

//4321
//432
//43
//4
//int a,b;
//
//for(a=1;a<=4;a++)
//{
//	for(b=4;b>=a;b--)
//	{
//		printf("%d",b);
//	}
//	printf("\n");		
//}	

//4
//43
//432
//4321
//	int a,b;
//	
//	for(a=4;a>=1;a--)
//	{
//		for(b=4;b>=a;b--)
//		{
//			printf("%d",b);
//		}
//		printf("\n");
//	}

//1
//23
//456
//78910
//int a,b,c=1;
//for(a=1;a<=4;a++)
//{
//	for(b=1;b<=a;b++)
//	{
//		printf("%d",c++);
//	}
//	printf("\n");
//}

//1
//35
//7911
//13151719
//int a,b,c=1;
//for(a=1;a<=4;a++)
//{
//	for(b=1;b<=a;b++)
//	{
//		printf(" %d ",c);
//		c=c+2;
//	}
//	printf("\n");
//}

//2
//46
//81012
//14161820
//int a,b,c=2;
//for(a=1;a<=4;a++)
//{
//	for(b=1;b<=a;b++)
//	{
//		printf(" %d ",c);
//		c=c+2;
//	}
//	printf("\n");
//}

//10
//9 8
//7 6 5
//4 3 2 1
//int a,b,c=10;
//for(a=1;a<=4;a++)
//{
//	for(b=1;b<=a;b++)
//	{
//		printf(" %d ",c--);
//	}
//	printf("\n");
//}

//a
//ab
//abc
//abcd
//int a,b;
//for(a='a';a<='d';a++)
//{
//	for(b='a';b<=a;b++)
//	{
//		printf("%c",b);
//	}
//	printf("\n");
//}

//1
//21
//321
//4321
//int a,b,c;
//for(a=1;a<=4;a++)
//{
//	for(b=a;b>=1;b--)
//	{
//		printf("%d",b);
//	}
//	printf("\n");
//}

//a
//bb
//ccc
//dddd
//int a,b;
//for(a='a';a<='d';a++)
//{
//	for(b='a';b<=a;b++)
//	{
//		printf("%c",a);
//	}
//	printf("\n");
//}

//d
//dc
//dcb
//dcba
//int a,b;
//for(a='d';a>='a';a--)
//{
//	for(b='d';b>=a;b--)
//	{
//		printf("%c",b);
//	}
//	printf("\n");
//}

//dcba
//dcb
//dc
//d
int a,b;
for(a='a';a<='d';a++)
{
	for(b='d';b>=a;b--)
	{
		printf("%c",b);
	}
	printf("\n");
}
}



