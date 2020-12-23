#include <stdio.h>

void digitizer(int number)
{
    int rem;
    while (number)
    {
        rem = number % 10;
        if (rem != 5 && rem != 8)
        {
            printf("Miserable Plato!");
            return;
        }
        number /= 10;
    }
    printf("Lucky Plato!");
}

int main()
{
    int number;
    scanf("%d", &number);
    digitizer(number);
}