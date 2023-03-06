#include<stdio.h>
#include<math.h>

int main()
{
    int a = 7;
    int b = 9;
    int c = pow(a,b);
    printf("%d \n", c);

    //modulo operator example (+, *, -, / examples are solved in other program kindly please go through it)
    printf("The remainder is %d \n", 19%2); // positive
    printf("The remainder is %d \n", -19%2); //negative 

    //type conversion 
    // int to int -> output int 
    // float to int -> float 
    // float to float -> float
    // let's see the examples 
    printf("%d \n", 2/2);
    printf("%f \n", 2.6/6);
    printf("%f \n", 9.0/3.5);

    //consider if we assign value int a = 1.999999 then we have to see whether the code will give us output as 1 or 2.
    int d = 1.9999999;
    printf("%d \n", d);

    //conversion are of two types : 1) Implicit - carried by compiler  2)Explicit- carried by us 
    //operator precedence : *,/,% -> +,- -> = (assignment operator)
    //let's see the example 
    //associativity when same operators are used. move from left to right
    //consider x = 4* 3 / 6*2
    printf("%d \n", 4*3/6*2);
    return 0; 
}


