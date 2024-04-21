#include <stdio.h>

int main(){
    float side, volume;

    printf("Enter side length of the cube:");
    scanf("%f", &side);

    volume = side * side * side;

    printf("Volume of the Cube: %.2f\n", volume);
    
    return 0;
}