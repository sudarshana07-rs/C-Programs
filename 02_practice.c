#include <stdio.h>
int main()
{
    int m1, m2, m3,m4,m5,m6;
    printf("Enter the marks obtained in Kannada: ");
    scanf("%d", &m1);
    printf("Enter the marks obtained in English: ");
    scanf("%d", &m2);
    printf("Enter the marks obtained in Hindi: ");
    scanf("%d", &m3);
    printf("Enter the marks obtained in Maths: ");
    scanf("%d", &m4);
    printf("Enter the marks obtained in Social: ");
    scanf("%d", &m5);
    printf("Enter the marks obtained in Science: ");
    scanf("%d", &m6);
    printf("Kannada- %d\n",m1);
    printf("English- %d\n",m2);
    printf("Hindi- %d\n",m3);
    printf("Maths- %d\n",m4);
    printf("Social- %d\n",m5);
    printf("Science- %d\n",m6);
    int total=m1+m2+m3+m4+m5+m6;
    float percentage=((float)total/600)*100;
    printf("Total-- %d \n" ,total);
    printf("Percentage-- %.2f \n", percentage);
    if(percentage > 40.00)
    {
        printf("You are Passed !!!");
    }
    else{
        printf("You are failed, Better next time");
    }
    return 0;
}