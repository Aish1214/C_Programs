//WAP to print from 0 to n where n is entered by the user.
#include<stdio.h>
//using both while and for loop
int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d", &n);
    // i=0;
    // while(i<=n){
    //     printf("%d \n",i);
    //     i++;
    // }
    for(i=0;n>=i;i++){
        printf("%d \n",i);
    }
    return 0;
}