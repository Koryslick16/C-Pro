#include <stdio.h>
#include <math.h>

int main(){
    int num;
	float squareRoot;
    printf("Enter a Number: ");
    scanf("%d", &num);

    squareRoot = sqrt(num);

    printf("The SquareRoot of %d is %.1f\n", num, squareRoot);
    return 0;
}
