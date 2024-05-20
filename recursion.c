#include<stdio.h>


//int sum(int k)
//{
//  if (k > 0) 
//  {
//    return k * sum(k - 1);
//  } 
//  else 
//  {
//    return 0;
//  }
//}
//
//int main() 
//{
//  int result = sum(10);
//  printf("%d", result);
//  return 0;
//}

int mul(int a)
{
	if(a>0)
	{
		return a * mul(a - 1);
	}
	else
	{
		return 1;
	}
}

	int main()
	{
		int result = mul(10);
		printf("%d",result);
		return 0;
	}




