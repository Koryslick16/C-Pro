#include <stdio.h>



void fibonacci(int n){
     int numA = 1;
     int numB = 0;
     int sum =  0;

     for(int i= 0; i < n; i++){
        sum = numA + numB;

    // printf("%d + %d = %d.\n", numA, numB, sum);

        if(numA > numB){
            numB = sum;
        }
        else{
            numA = sum;
        }
     }
     return sum;
}


int main(){
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    int i = 0;
    while(1)
    {
        int f = fibonacci(i);
        if (f > n){
            break;
        }
        printf("%d\n", f);
        i++;
    }
    
}