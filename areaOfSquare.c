#include<stdio.h>
int main()
{
    //declare the variable
    float side;
    
    printf("Enter the side of square: ");
    scanf("%f", &side);

    // area of square = side * side 
    printf("The area of the square is %f", side * side);
    return 0;
}