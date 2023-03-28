//wap to program to print a table where user gives an input
#include<stdio.h>
int main()
{
    int a, i, product;
    printf("Enter the number:");
    scanf("%d", &a);        
    for(i=1;i<=10;i++){
        // printf("%d \n", i);
        product = a * i;
        printf("%d * %d = %d \n",a,i,product);

    }
    
    return 0;
    
}