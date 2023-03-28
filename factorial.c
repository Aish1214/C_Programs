//wap a program  for factorial
#include<stdio.h>
int main()
{
    int a, i, sum=1,d;
    printf("Enter the number: ");
    scanf("%d", &a);
    for(i=1;i<=a;i++){
     sum = sum * i;
        

    }
    printf("%d",sum);
    return 0;
}