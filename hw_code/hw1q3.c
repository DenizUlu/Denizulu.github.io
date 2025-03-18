#include <stdio.h>

int main(void){
	int pop;
	
	int size;
	
	int price;
	
	printf("Enter popularity\n");
	scanf("%d", &pop);
	
	printf("Enter popularity\n");
	scanf("%d", &size);
	
	price = (pop*pop*pop + size*size) *10000;
	printf("price is %d\n", price);
	
	
}
