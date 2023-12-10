// c program to print all 2 digit happy numbers
#include <stdio.h>

int sumOfSquares(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + (rem * rem);
        n = n / 10;
    }
    return sum;
}

int isHappyNumber(int n)
{
    int temp = n;
    while (temp != 1)
    {
        temp = sumOfSquares(temp);
        if (temp == 4)
            return 0;
    }
    return 1;
}

int main()
{
    int i, j,limit;
    printf("The program displays all happy numbers between 1 and 'limit'\n");
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for (i = 1; i <= limit; i++)
    {
        if (isHappyNumber(i))
            printf(" %d ", i);
    }
    return 0;
}