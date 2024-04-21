#include <stdio.h>
#include <math.h>

int main(){
    float num, result;
    printf("Enter a Number: ");
    scanf("%f", &num);

    result = tan(num);
    printf("The Tangent of %.1f is = %.1f", num, result);
    return 0;
}
