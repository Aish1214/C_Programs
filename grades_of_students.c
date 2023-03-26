//wrtie a program to give grades to a student marks
//marks < 30 is C
//30 <= marks is B
// 70 <= marks < 90 is A 
// 90 <= marks <= 100 is A+

#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks < 30){
        printf("C");
    }else if(30 <= marks && 70 > marks){
        printf("B");

    }else if(70 <= marks && marks < 90 ){
        printf("A");
    }else if(90 <= marks && marks <= 100){
        printf("A+");
    }
    return 0;

}