#include<stdio.h>

int main()
{
int a;
int sum=0;



while(1)
{
printf("enter the value of a:->");
scanf("%d",&a);

if(a%2==1)
{
sum=sum+a;
}
else{
printf("sum is :->%d",sum);
break;
}
}
}

