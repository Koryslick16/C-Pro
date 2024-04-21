#include <stdio.h>

// grading system for tests using a nested if statements / conditional statements.


int main(){
    int i;
    printf("Enter your Score: ");
    scanf("%d", &i);

    if(i > 79 && i <= 100){
        printf("Your Grade: A");
    }
    else if(i > 69 && i <= 79){
        printf("Your Grade: B");
    }
    else if(i > 49 && i <= 69){
        printf("Your Grade: C");
    }
    else if(i > 39 && i <= 49){
        printf("Your Grade: D");
    }
    else if(i > 29 && i <= 39){
        printf("Your Grade: E");
    }
    else if(i > 19 && i <= 29){
    	printf("Your Grade: P");
	}
    else if(i >= 0 && i <= 19){
        printf("Your Grade: F");
    }
    else{
        printf("Try Again Next Year.");
    }
}
