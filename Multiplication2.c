
#include <stdio.h>

// Multiplication to display reverse product




int main(){
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 15; i >= 1; i--){
        printf("%d * %d= %d\n", num, i, num * i);
    }
}






