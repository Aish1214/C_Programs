//age is greater than 13 and age is lesser than 18. Classify between adult, teenager and child
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d ",&age);
    if(age >= 18){
        printf("Adult \n");
    } 
    else if(age > 13 && age < 18){
        printf("Teenager \n");
    }
    else {
        printf("Child \n");
    }
    return 0;
}