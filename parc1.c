#include<stdio.h>
struct Employee
{
    char name[50];
    float da;
    float hra;
    float basic_pay;
    float gross_salary;
};
void computesalary (struct Employee *emp)
{
    emp->da = 0.80*emp->basic_pay;
    emp->hra = 0.30*emp->basic_pay;
    emp->gross_salary = emp->da + emp->hra + emp->basic_pay;
}
int main()
{
    int N,i;
    printf("Enter the no. of employees: ");
    scanf("%d", &N);
    struct Employee employees[N];
    for (i=0; i<N;i++)
    {
        printf("Enter the details of the employee %d \n",i+1);
        
        printf("Enter the name: ");
        scanf("%s", employees[i].name);
        printf("Enter the basic pay: ");
        scanf("%f", &employees[i].basic_pay);
        computesalary(&employees[i]);
    }
    printf(" \n %-20s %-15s \n","Employee Salary" , "Gross Salary");
    printf("---------------------------------------------------");

    for(i=0 ; i<N; i++)
    {
        printf("\n %-20s %-15.2f \n", employees[i].name,employees[i].gross_salary);
    }
return 0;
}