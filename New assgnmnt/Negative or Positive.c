#include <stdio.h>
int main() {
    float num;

    printf("Enter number:");
    scanf("%f", &num)

    if(num > 0){
        printf("%.1f is a Positive Number.\n", num);
    } else if(num < 0){
        printf("%.1f is a Negative Number.\n", num);
    }
    else{
        printf("You entered zero. \n");
    }

    return 0;
}