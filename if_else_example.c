// to check whether the person is eligible for voting or not using if - else conditional statement
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);// use the relational operator  age > 18, your age should be greater than 18. 
    if(age > 18){
        printf("You are eligible for voting. \n");

    }else {
        printf("You are underage and not eligible for age \n");

    }
    return 0;
}