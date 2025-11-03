/*
Practice Set 3
To convert Celsius to Fahrenheit
*/

#include <stdio.h>
int main()
{
    float c;
    printf("Enter the temperature in degree Celsius:\n");
    scanf("%f",&c);
    float convert= (c*9/5)+32;
    printf("The temperature in Fahrenheit is: %f", convert);
    return 0;
}