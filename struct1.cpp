#include<stdio.h>
#include<string.h>

struct phone{
	char name[50];
	int ram;
	int price;
	int storage;
};

int main()
{
	char a[50];
	int b;
	int c;
	int d;
	
	printf("Enter name: ");
	scanf("%s",&a);
	printf("Enter ram: ");
	scanf("%d",&b);
	printf("Enter price: ");
	scanf("%d",&c);
	printf("Enter storage: ");
	scanf("%d",&d);
	
	struct phone p1;
	strcpy(p1.name,a);
	p1.price = b;
	p1.ram = c;
	p1.storage = d;

	printf("\nPhone name: %s",p1.name);
	printf("\nPhone price: %d",p1.price);
	printf("\nPhone ram: %d",p1.ram);
	printf("\nPhone storage: %d",p1.storage);
	
}
