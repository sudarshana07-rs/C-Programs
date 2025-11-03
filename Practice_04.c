/*
Practice Set 4
Find the simple interest
Using the user input
*/

#include <stdio.h>
int main()
{
    float p;
    int r;
    int t;
    printf("Enter the Principal Amount:");
    scanf("%f",&p);
    printf("Enter the Rate of interest:");
    scanf("%d",&r);
    printf("Enter the Time period:");
    scanf("%d",&t);
    float interest=(p*r*t)/100;
    printf("The simple interest is:%f",interest);
    return 0;
}