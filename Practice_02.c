/*
Practice Set 2
Find the area of circle and volume of the cylinder
Using the user input
*/

#include <stdio.h>
int main()
{
    int r;
    int h;
    printf("Enter the radius of the circle: \n");
    scanf("%d",&r);
    printf("Enter the height of the cylinder:\n ");
    scanf("%d",&h);
    printf("The area of the circle is: %f",3.142*r*r);
    printf("The volume of the cylinder is: %f",3.142*r*r*h);
    return 0;
}