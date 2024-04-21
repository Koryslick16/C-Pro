#include <stdio.h>

//Multiplication to display only values


int main(){
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 15; i++){
		printf("%d\n", num * i);
	}
}



