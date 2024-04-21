#include <stdio.h>
#include <math.h>


int main(){
    float num, result;
    print("Enter a Number: ");
    scanf("%f", &num);

    result = cos(num);
    printf("The Sine of %.0f is = %.1f", num, result);
}
