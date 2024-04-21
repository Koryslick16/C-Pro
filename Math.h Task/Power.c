#include <stdio.h>
#include <math.h>

int main(){
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int result = pow(base, exponent);
    printf("The result is %d", result);

    return 0;
}
