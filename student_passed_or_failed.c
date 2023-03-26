//write a program to check if  a student passed or failed 
// marks> 30 is pass
// marks <= 30 is fail
#include<stdio.h>
int main(){
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);
    if(marks > 0 && marks <= 30){
        printf("You are fail");
    
    }else if(marks > 30 && marks <= 100){
        printf("You are passed");
    }
    else{
        printf("Wrong input.");
    }
    return 0;
}