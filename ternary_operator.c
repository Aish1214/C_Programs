//enter age to see adult or not adult 
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    age >= 18?printf("your are adult \n"):printf("Not adult \n");
    return 0;
}