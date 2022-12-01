#include <stdio.h>
#include <math.h>

int main()
{
    int number, digits = 0, obtainedNum = 0, originalNumber;
    printf("Enter a number to check whether its Armstrong Number or not:");
    scanf("%d", &number);
    originalNumber = number;
    while (number > 0)
    {
        digits++;
        number /= 10;
    }
    number = originalNumber;
    while (number > 0)
    {
        obtainedNum += pow(number % 10, digits);
        number /= 10;
    }
    originalNumber == obtainedNum ? printf("The number %d is a Armstrong Number",originalNumber) : printf("The number %d is not a Armstrong Number",originalNumber);
    return 0;
} // Main