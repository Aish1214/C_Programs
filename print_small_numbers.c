#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a < b && a < c)
        printf("%d is smaller", a);
    else
        if(b < a && b < c)
            printf("%d is smaller", b);
    else
        if(c < a && c < b)
            printf("%d is smaller", c);
    return 0;
        

}