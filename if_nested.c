//program where you need identify that the number is positive or negative and also the number is even or odd. but if the number is positive then only it should
// classify whether the number is even or odd. 

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);
    if(a >= 0){
        printf("The number is positive.");
        if(a % 2 == 0){
            printf("The number is even.");
        }else{
            printf("The number is odd.");
        }
    }else{
        printf("The number is negative.");
    }
    return 0;
}