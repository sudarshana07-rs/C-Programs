#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("Your eligible to caste your valuable vote !!!");
    }
    else
    {
        printf("Your not eligible to caste your vote");
    }
    return 0;
}