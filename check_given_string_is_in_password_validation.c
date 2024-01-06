// C program to check if a given string is a valid password.
// The password must have a length of at least 8 characters,
// contain at least one lowercase letter, one uppercase letter,one digit, and one special character.

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
    if (n < 8)
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
    // Check if the password contains at least one special character
    for (i = 0; i < n; i++)
    {
        if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '+' || str[i] == '=' || str[i] == '[' || str[i] == ']' || str[i] == '{' || str[i] == '}' || str[i] == ';' || str[i] == ':' || str[i] == ',' || str[i] == '.' || str[i] == '?' || str[i] == '/')
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Invalid password\n");
        return 0;   
    }
    else
    {
    printf("Valid password\n");
    }
    return 0;
}
