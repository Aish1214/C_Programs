//wap a program  for sum of first n natural numbers
#include<stdio.h>
int main()
{
    int a, i, sum=0,d;
    printf("Enter the number: ");
    scanf("%d", &a);
    for(i=1;i<=a;i++){
     sum = sum + i;
        

    }
    printf("%d",sum);
    return 0;
}