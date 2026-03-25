#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,m6;
    printf("Student Report Card .....\n");
    printf("--------------------- \n");
    printf("Enter your marks below as follows !!! \n");
    printf("Kannada = \n");
    scanf("%d",&m1);
    printf("English= \n");
    scanf("%d",&m2);
    printf("Hindi = \n");
    scanf("%d",&m3);
    printf("Mathematics = \n");
    scanf("%d",&m4);
    printf("Science = \n");
    scanf("%d",&m5);
    printf("Social Science = \n");
    scanf("%d",&m6);
    printf("----------------------- \n");
    printf("Marks obtained \n");
    printf("Kannada= %d \n", m1);
    printf("English = %d \n", m2);
    printf("Hindi = %d \n", m3);
    printf("Mathematics = %d \n",m4);
    printf("Science = %d \n", m5);
    printf("Scocial Science = %d \n", m6);
    printf("-------------------------- \n");
    int total=m1+m2+m3+m4+m5+m6;
    printf("Total = %d \n", total);
    float percentage=total*100/600;
    printf("Percentage = %2.2f \n", percentage);
    printf("-------------------------------- \n");
    printf("I am Sudarshana");
    return 0;
    
}