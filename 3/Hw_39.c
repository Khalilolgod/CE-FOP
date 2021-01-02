#include <stdio.h>
#include <stdlib.h>

// a b x
/*
1->a : a% i == 0 
    --> 1->b : b % j == 0
        if i + j > x
        break
*/

int main()
{
    int a, b, x;
    scanf("%d%d%d", &a, &b, &x);
    int all = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            for (int j = 1; j + i <= x; j++)
            {
                if(b%j == 0)
                {
                    //printf("(%d,%d)",i,j);
                    all++;
                }
            }
        }
    }
    printf("%d",all);
}