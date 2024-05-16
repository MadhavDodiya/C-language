#include<stdio.h>
#include<string.h>


struct laptop{
	
	char name[50];
	int price;
	int ram;
	int storage;
	
	
	
};


int main(){
	
	
//	structure

struct laptop l1;
//l1.name="hp gaming";
strcpy(l1.name,"HP GAMING");

l1.price=50000;
l1.ram=16;
l1.storage=256;

printf("\n%s",l1.name);
printf("\n%d",l1.price);
printf("\n%d",l1.ram);
printf("\n%d",l1.storage);


struct laptop l2;

strcpy(l2.name,"ASUS GAMING");

l2.price=60000;
l2.ram=8;
l2.storage=128;

printf("\n%s",l2.name);
printf("\n%d",l2.price);
printf("\n%d",l2.ram);
printf("\n%d",l2.storage);







	
	
}
