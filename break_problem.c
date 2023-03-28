//keep taking numbers as input from user until user enters an odd numbers
#include<stdio.h>
int main()
{
    int a;
    do{
        printf("Enter the number: \n");
        scanf("%d", &a);

        if(a % 2 != 0){
            break;
        }
    }while(1);
    printf("Ty");
    return 0;
}