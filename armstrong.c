// //Write a program to check if a given number is Armstrong number or not 
#include<stdio.h>
int main()
{
    int a, b, c = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &a);

    temp = a;
    while (temp != 0){
        b = temp % 10;
        c += b * b * b;     
        temp /= 10;
    }
   
    if(a == c ){
        printf("Yes Armstrong number");

    }else{
        printf("No Armstrong number");

    }
    return 0;
    }
