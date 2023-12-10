// c program to check if the given string is in password validation
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, n, flag = 0;
    printf("Enter the string: ");
    scanf("%s",str);
    n = strlen(str);
    // Check if the length of the password is at least 8 characters
    if (strlen(str) < 8)
    {
        printf("Invalid password\n");
    }
    // Check if the password contains at least one lowercase letter
    for (i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Invalid password\n");
        return 0;
    }
    // Check if the password contains at least one uppercase letter
    for (i = 0; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Invalid password\n");
        return 0;
    }
    // Check if the password contains at least one digit
    for (i = 0; i < n; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Invalid password\n");
        return 0;
    }
    printf("Valid password\n");
    return 0;
}