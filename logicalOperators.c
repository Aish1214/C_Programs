#include<stdio.h>
int main()
{
    // &&, ||, ! 
    printf("%d", (4 > 3) && (5 < 8));
    printf("%d", (4 >= 4) || (3 < 8 ));
    printf("%d", !(4 >= 4) || (3 < 8 ));

    //can write arithmetic operators
    printf("%d \n", (7+7) > (8 * 9 - 7) && (18 > 9));  
    return 0;
}