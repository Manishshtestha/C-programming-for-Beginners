#include <stdio.h>
int main()
{
    int num;
    printf("Enter number :");
    scanf("%d", &num);

    while (num > 0)
    {

        if (num % 2 == 0) 
        {
            num = num / 2;
            printf("%d\n", num);
        }
        else
        {
            num = 3 * num + 1;
            printf("%d\n", num);
        }
        if (num == 1)
        {
            printf("The program will continue infinetely repeating 4,2 and 1\n\n\n\n");
            break;
        }
    }
    return 0;
}
