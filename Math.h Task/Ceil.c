#include <stdio.h>
#include <math.h>

int main(){
    float a;
    int result;
    printf("Enter a Number: ");
    scanf("%f", &a);

    result = ceil(a);
    printf("The ceiling of %.1f is = %d\n", a, result);
    
    return 0;
}
