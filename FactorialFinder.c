// WAP in C to find the factorial of the given number 😃
#include <stdio.h>

int main()
{
    int num; // Declaring variables ✌
    long int f=1;
    printf("Enter the Number:\n");
     // Taking Input from the user 😎
    scanf("%d", &num);
    // Using ForLoop for the condition 👌
    for (int i = 1; i <= num; i++)
    {
        f = f * i; // Main Calculation🤔
    }
    printf("The Factorial of %d is %d",num,f); // Getting Output😚
    return 0;
}