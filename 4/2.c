#include <stdio.h>

int they_work(int a, int b, int c)
{
    if (a + b > c)
    {
        if (a + c > b)
        {
            if (b + c > a)
            {
                printf("%d %d %d", a, b, c);
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(they_work(a , b, c))
        return 0;
    if(they_work(a , b, d))
        return 0;
    if(they_work(a , c, d))
        return 0;
    if(they_work(b , c, d))
        return 0;
}