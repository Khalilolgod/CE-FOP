#include <stdio.h>

int fac(int input)
{
    int out = 1;
    for(int i = 1; i <= input ; i++)
    {
        out *= i;
    }
    return out;
}

int min(int a , int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}


int main()
{
    int a , b;
    scanf("%d %d",&a, &b);
    printf("%d" , fac(min(a , b)));

}