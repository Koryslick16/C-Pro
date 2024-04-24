#include <stdio.h>
#include <math.h>

int main(){
    float num, result;
    printf("Enter a float Number: ");
    scanf("%f", &num);

    result = log10(num);

    printf("Log10 of %.1f is = %.2f\n", num, result);

    return 0;
}






