#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character to check vowel or consonent:");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("This letter is vowel.\n");
    }
    else {
        printf("This letter is consonant.\n");
    }

    return 0;
}