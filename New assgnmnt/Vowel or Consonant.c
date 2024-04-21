#include <stdio.h>

int main(){
    char letter;

    printf("Enter a Character: ");
    scanf("%c", &letter);

    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
           printf("%c is a Vowel.\n", letter);
           break;
1        default:
           printf("%c is a Consonant.\n", letter);
    }
}