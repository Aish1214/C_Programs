// write a program to identify a letter is upper case or lower case.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z') {
        printf("Upper Case");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lower case");
    }
    else{
        printf("wrong input");
    }
    return 0;
    
}