#include<stdio.h>
int main()
{
    int a; 
    printf("Enter the number: ");
    scanf("%d ", &a);
    if(a % 2 == 0)
        printf("The number is divisible is by 2.", a);
    else
        printf("Not divisible \n", a);
    return 0;

    

}