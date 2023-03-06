#include<stdio.h>
int main()
{
    int a = 4;
    int b = a;
    int c = b + 9;
    printf("The answer is %d \n", c);
    
// always declare variable first. declare then use 

    int age = 22;
    int years = 2;
    int ageAfterTwoYears = age + years;
    printf("The answer is %d \n", ageAfterTwoYears);
    

    // multiple variable declaration
    //first declare variable then assign values 
    int r, s, t;-
    r = s = t = 6;
    printf("a = %d, b = %d, c = %d", r,s,t);
    return 0;
}
