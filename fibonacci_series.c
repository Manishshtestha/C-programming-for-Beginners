// WAP in to display the first n terms of Fibonacci series😫
#include <stdio.h>

int main()
{
    int num, f = 0, g = 1, nxtnum;//Declaring Variables😁
    printf("Input the number of terms to display: ");
    scanf("%d", &num);//Getting input from the user😎
    printf("Here is the Fibonacci series upto %d term(s)\n", num);
    if (num == 1)
    {
        printf("%d", f);
    }
    else if (num > 1)
    {
        printf("%d,%d,", f,g);
    }

    for (int i = 0; i < (num - 2); i++)
    {
        printf("%d+", f + g);
        nxtnum = f + g;
        f = g;
        g = nxtnum;
    }
    return 0;
}
