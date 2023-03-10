// check whether it is odd number or not 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if(a %  2 == 0)
        printf("This is even", a);
    else
        printf("Odd number it is ", a);
    return 0;
}