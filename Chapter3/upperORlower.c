#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a letter:");
    scanf("%c", &letter);

    if(letter >= 'a' && letter <='z') {
        printf("lowercase.\n");
    }
    else{
        printf("uppercase.\n");
    }
    
    return 0;
}