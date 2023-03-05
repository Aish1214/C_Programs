#include<stdio.h>
int main()
{
    //declare the variable
    float radius;
    
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    // area of circle = 3.14 * radius * radius 
    
    printf("The area of the circle is %f", 3.14 * radius * radius);
    return 0;
 }