/*
Practice Set 1
Find the area of the rectangle
Taking user output
*/

#include <stdio.h>
int main()
{
    int l;
    int b;
    printf("Enter the lenght of the rectangle: \n");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle: \n");
    scanf("%d", &b);
    int area= l*b;
    printf("The area of the rectangle is: %d",area);
    return 0;
}