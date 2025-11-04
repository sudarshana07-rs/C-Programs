/*
Knowing more about variables
Wrong way to declare a variable is
int a;
int b;
int a=2, b=3, c=4;  ---> XXXX
The above code wil show the error because one can't redeclare a variable
*/

#include <stdio.h>
int main()
{
    int i=10;
    int j=i;
    printf("The value of i is %d and value of j is %d \n",i,j);
    int a=20, b=30, c=40, d=50;
    printf("The value of a is %d \n",a);
    printf("The value of b is %d \n",b);
    printf("The value of c is %d \n",c);
    printf("The value of d is %d \n",d);
    return 0;
}