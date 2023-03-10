// same goes with the divisibility of 11 : a % 11 == 0 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if(a % 5 == 0)
        printf("The number is divisible by 5", a);
    else
        printf("The number is not divisible by 5.");
        return 0; 
}
