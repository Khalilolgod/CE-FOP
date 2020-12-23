#include <stdio.h>

void lozi(int a)
{
    int spaces;
    for(int i = 1 ; i <= a ; i++)
    {
        spaces = a -i;
        for(int j = 0; j < spaces; j++ )
        {
            printf(" ");
        }
        for(int j = 0; j < (2*i)-1; j++ )
        {
            printf("*");
        }
        for(int j = 0; j < spaces; j++ )
        {
            printf(" ");
        }
        printf("\n");
    }
    for(int i = a-1 ; i > 0 ; i--)
    {
        spaces = a -i;
        for(int j = 0; j < spaces; j++ )
        {
            printf(" ");
        }
        for(int j = 0; j < (2*i)-1; j++ )
        {
            printf("*");
        }
        for(int j = 0; j < spaces; j++ )
        {
            printf(" ");
        }
        printf("\n");

    }
}

int main()
{
    int number;
    scanf("%d", &number);
    lozi(number);

}