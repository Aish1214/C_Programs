#include<stdio.h>
int main()
{
    int a = 9;
    int b = 6;
    printf("%d \n", a += b);
    printf("%d \n", a -= b);
    printf("%d \n", a *= b);
    printf("%d \n", a /= b);
    printf("%d \n", a %= b);
    return 0;

}