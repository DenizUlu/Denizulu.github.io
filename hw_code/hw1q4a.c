#include <stdio.h>


int computeHomeValue(int pop, int size){
	int	price;
	price = (pop*pop*pop + size*size)*10000;
	return price;
	
}
int main(void){
	int pop;
	int size;
	printf("enter pop\n");
	scanf("%d", &pop);
	printf("enter size\n");
	scanf("%d", &size);
	printf("price is %d", computeHomeValue(pop, size));
	
	
}
