#include <stdio.h>
int main()
{
    float salary;
    printf("Enter your salary: ");
    scanf("%f",&salary);
    if(salary > 250000 && salary < 500000)
    {
        float income_tax1=salary*5/100.0;
        printf("The income tax to be paid = %f",income_tax1);
    }
    else if (salary > 500000 && salary < 1000000)
    {
        float income_tax2=salary*20/100.0;
        printf("The income tax to be paid = %f",income_tax2);
    }
    else if(salary > 1000000)
    {
        float income_tax3=salary*30/100.0;
        printf("The income tax to be paid = %f",income_tax3);
    }
    else
    {
        printf("Invalid input !!!");
    }
    return 0;
}