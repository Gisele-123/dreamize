#include<stdio.h>

int main(){
	int i=0;
	printf("While loops\n");
	while(i<10){
		printf("I am a dreamer\n");
		i++;
	}
	printf("\n\nDo while loops\n\n");
	
	do{
		printf("Dreamer I am\n");
		i++;
	}while(i<10);
	return 0;
}