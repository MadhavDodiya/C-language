#include<stdio.h>
#include<string.h>

struct cake{
	char name[50];
	int price;
	int weight;
	int stock;
};

int main(){
	
	char name[50];
	int price;
	int weight;
	int stock;
	int l;
	
	struct cake c[50];
	
	for(l=0;l<=1;l++)
	{

	printf("enter ur cake name:");
	scanf("%s",&name);
	printf("enter ur cake price:");
	scanf("%d",&price);
	printf("enter ur cake weight:");
	scanf("%d",&weight);
	printf("enter ur cake stock:");
	scanf("%d",&stock);
	printf("\n");
	
	strcpy(c[l].name,name);
	c[l].price=price;
	c[l].weight=weight;
	c[l].stock=stock;
	
}

	for(l=0;l<=1;l++){
		printf("\n\ncake name is - %s\n",c[l].name);
		printf("cake price is - %d\n",c[l].price);
		printf("cake weight is - %dkg\n",c[l].weight);
		printf("cake stock is - %d\n",c[l].stock);
	}	
}
