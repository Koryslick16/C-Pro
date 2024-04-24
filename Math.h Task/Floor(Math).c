#include <stdio.h>
#include <math.h>

int main(){
    float num, result;
    printf("Enter a Negative Float Number: ");
    scanf("%f", &num);

    result = floor(num);
    printf("The Floor of %.1f is = %.1f\n", num, result);
    return 0;
}
