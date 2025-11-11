#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i=0;
    while (i<=10)
    {
        int mul=n*i;
        printf("%d * %d = %d \n", n ,i,mul );
        i++;
    }
    return 0;
}
