#include <stdio.h>
#define f 1.8
int main()
{
    int option;//Declaring Variable(s)😊
    float temp, cel, far, kel;
    printf("What's Given?:\n1.Temperature in Celcius\n2.Temperature in Farhenheit\n3.Temperature in Kelvin\n");
    scanf("%d", &option);//Choosing betweeen Celcius,Farhanheit,Kelvin🤨
    switch (option)//Using Switch for selecting any option😝
    {
    case 1:
        printf("Temperature in Celcius Selected\n");
        printf("Enter the Temperature:\n");
        scanf("%f", &temp);
        cel = temp;
        far = (cel * f) + 32;
        kel = cel + 273.15;
        printf("The given temperature in Farhenheit Scale is :%03f \n", far);
        printf("The given temperature in Kelvin Scale is: %02f", kel);
        break;
    case 2:
        printf("Temperature in Farhenheit Selected\n");
        printf("Enter the Temperature:\n");
        scanf("%f", &temp);
        far = temp;
        cel = (far - 32) / f;
        kel = cel + 273.15;
        printf("The given temperature in Celcius Scale is :%03f \n", cel);
        printf("The given temperature in Kelvin Scale is: %02f \n", kel);
        break;
    case 3:
        printf("Temperature in Kelvin Selected\n");
        printf("Enter the Temperature:\n");
        scanf("%f", &temp);
        kel = temp;
        cel = kel - 273.15;
        far = (cel * f) + 32;
        printf("The given temperature in Celcius Scale is :%03f \n", cel);
        printf("The given temperature in Farhenheit Scale is: %02f \n", far);
        break;

    default:
        break;
    }

    return 0;
}