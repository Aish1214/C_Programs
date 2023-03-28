//wap to calculate sum of all numbers between 5 to 50
#include<stdio.h>
int main(){
    int sum = 0;
    int i;
    for(i = 5;i<=50;i++){
        
        sum += i;
        
    }
    printf("the sum is %d",sum);
    return 0;
}