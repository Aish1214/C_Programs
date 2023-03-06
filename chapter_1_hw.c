//a. Write a program to calculate perimeter of rectangle.
//Take sides, a & b, from the user.

//b. Take a number(n) from user & output its cube(n*n*n).

//c. Write comments for programs a & b.
#include<stdio.h>
int main()
{   // perimeter = 2(l+b)
    float a, b;
    printf("Enter length of the rectangle : \n");
    scanf("%f", &a);

    printf("Enter breadth of the rectangle : \n");
    scanf("%f", &b);

    float perimeter = 2 * (a + b);
    printf("The perimeter of rectangle is %f \n", perimeter);

    int d;
    printf("Enter the side of the cube: \n");
    scanf("%d", &d);
    int e = d * d * d;
    printf("The answer is: %d \n", e);
    return 0;
}

