//write a program to check if  a student passed or failed 
// marks> 30 is pass
// marks <= 30 is fail
#include<stdio.h>
int main(){
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);
    if(marks <= 30){
        printf("You are fail");
    }else{
        printf("You are passed.");
    }
    return 0;
}