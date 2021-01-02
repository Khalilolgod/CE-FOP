#include <stdio.h>

int gcd(int a , int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b , a%b);
}

int main()
{
    
    int a,b,c;
    scanf("%d %d %d" , &a , &b , &c);
    if(a < b)
    {
        printf("%d\n", gcd(b , a));
    }
    else
    {
        printf("%d\n", gcd(a , b));
    }
    
    if(a < c)
    {
        printf("%d\n", gcd(c , a));
    }
    else
    {
        printf("%d\n", gcd(a , c));
    }

    if(b < c)
    {
        printf("%d\n", gcd(c , b));
    }
    else
    {
        printf("%d\n", gcd(b , c));
    }
    
}