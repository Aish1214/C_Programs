#include<stdio.h>
int main()
{
    int a, b, sum;
    // take input a (first number)
    printf("Enter first number: ");
    scanf("%d", &a);

    // take input b (second number)
    printf("Enter second number: ");
    scanf("%d", &b);

    //Sum of two number a+b
    sum = a + b;
    printf("Sum is : %d \n", sum);
    

    //without declaring third variable you can directly mention as printf("Sum is : %d", a + b);
    //Let's do for multiplication, division and substraction
    printf("Difference is : %d \n", a-b);
    printf("Product is : %d \n", a*b);
    printf("Quotient is : %d\n", a/b);
    return 0;
}