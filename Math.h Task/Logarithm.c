#include <stdio.h>

int main(){
    float b, result;
    printf("Enter a Number: ");
    scanf("%f", &b);

    result = log(b);
    printf("Log(%.1f) = %.1f\n", b, result);

    return 0;
}
