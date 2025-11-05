#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: \t");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("Your are a adult !!!");
    }
    return 0;
}