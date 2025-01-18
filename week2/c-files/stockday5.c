#include<stdio.h>

int main(){
	int stock[]={10, 50, 30, 15, 25};
	int i=0;
	int sum=0;
	int average;
	int n=0;
	while(i<5){
		printf("Product %d Stock: %d\n", i+1, stock[i]);
		n++;
		sum=sum+stock[i];
		average=sum/n;
		i++;
	}
	printf("\n\n\n");
	printf("Total stock: %d\n", sum);
	printf("Average stock: %d\n", average);
	
	return 0;
}