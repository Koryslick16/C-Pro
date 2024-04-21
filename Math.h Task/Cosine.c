#include <stdio.h>
#include <math.h>


int main(){
    float num, result;
    printf("Enter a Number: ");
    scanf("%f", &num);

    result = cos(num);
    printf("The Cosine of %.0f = %.1f", num, result);
    return 0;
}
