/*Program to check validity of a password.
A valid password must have atleast 8 characters. One upper case leter , one lower case letter,
one digit,one special character*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i, n, flag = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    n = strlen(str);
    // Check if the length of the password is at least 8 characters
    if (n < 8) 
    {
        printf("Invalid password\n");
        return 0;
    }
    // Check if the password contains at least one lowercase letter
    for (i = 0; i < n; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') {
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
    flag = 0; // Reset flag for the next condition
    for (i = 0; i < n; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("Invalid password\n");
        return 0;
    }
    // Check if the password contains at least one digit
    flag = 0; // Reset flag for the next condition
    for (i = 0; i < n; i++) {
        if (str[i] >= '0' && str[i] <= '9') 
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("Invalid password\n");
        return 0;
    }
    // Check if the password contains at least one special character
    flag = 0; // Reset flag for the next condition
    for (i = 0; i < n; i++) 
    {
        if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '+' || str[i] == '=' || str[i] == '[' || str[i] == ']' || str[i] == '{' || str[i] == '}' || str[i] == ';' || str[i] == ':' || str[i] == ',' || str[i] == '.' || str[i] == '?' || str[i] == '/') 
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
    else 
    {
        printf("Valid password\n");
    }
    return 0;
}
