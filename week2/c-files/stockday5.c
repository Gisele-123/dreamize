#include<stdio.h>

int main(){
	int stock[]={10, 50, 30, 15, 25};
	int i=0;
	int sum=0;
	int average;
	int count=0;
	while(i<5){
		printf("Product %d Stock: %d\n", i+1, stock[i]);
		count++;
		sum=sum+stock[i];
		average=sum/count;
		i++;
	}
	printf("\n\n\n");
	printf("Total stock: %d\n", sum);
	printf("Total stock: %d\n", average);
	
	
	return 0;
}