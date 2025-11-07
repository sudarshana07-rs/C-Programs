#include <stdio.h>
int main()
{
    char letter;
    printf("Enter a letter to known the case: ");
    scanf("%c", &letter);
    if (letter >= 97 && letter<=122)
    {
        printf("%c is in lower case", letter);
    }
    else if (letter >=65 && letter <=90)
    {
        printf("%c is in Upper case", letter);
    }
    else
    {
        printf("Invalid Output!!!");
    }
    return 0;
}