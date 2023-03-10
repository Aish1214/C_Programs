// to check whether the given character entered is digit or not 
#include<stdio.h>
#include<ctype.h>

int main()
{
    char a;
    printf("Enter the character:    " );
    scanf("%c", &a);
    if( isdigit(a))
        printf("This is digit", a);
    else
        printf("This is not digit ", a);
    return 0;
}