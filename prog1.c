#include <stdio.h>
int main()
{
    char str[100];
    int length = 0;
    int p = 1;
    printf("Enter any string :");
    scanf("%s", &str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            p = 0;
        }
    }
    if (p)
    {
        printf("the Given string is Palindrome");
    }
    else
    {
        printf("the Given string is Not Palindrome");
    }
    return 0;
}