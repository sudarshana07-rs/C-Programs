// # include <stdio.h>
// int main()
// {
// int a; // variable declaration
// a=6; // variable initialization
// printf("The output of this program is %d",a); // printing the variable
// return 0;
// }

// #include <stdio.h>
// float main()
// {
// float b;
// b = 2.5;
// printf("The output of this program is %f", b);
// return 0;
// }

// # include <stdio.h>
// int main()
// {
// char c;
// c = 'S';
// printf ("%c",c);
// return 0;
// }

#include <stdio.h>
int main()
{
    printf("The size of int: %zu bytes \n", sizeof(int));
    printf("The size of float: %zu bytes \n", sizeof(float));
    printf("The size of char: %zu bytes \n", sizeof(char));
    return 0;
}