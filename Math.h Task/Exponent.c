#include <stdio.h>
#include <math.h>

int main (){
    float a, result;
    printf("Input a Number: ");
    scanf("%f", &a);

    result = exp(a);
    printf("The exponential of %.1f is %.1f\n", a, result);
    
    return 0;
}
