#include <stdio.h>
#include <math.h>
int len(int a)
{
    int cnt = 0;
    while (a)
    {
        a /= 10;
        cnt++;
    }
    return cnt;
}

int is_prime(int a)
{
    int sq_rt = sqrt(a)+1;
    for (int i = 2; i < sq_rt; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int power(int a, int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= a;
    }
    return ans;
}

int check(int a , int tool)
{
    int rem = 0;
    for (int i = 0; i < tool; i++)
    {
        rem = a % 10;
        a /= 10;
        a = rem * power(10, tool - 1)+ a;
        if (!is_prime(a))            
            return 0;

    }
    return 1;
}

int main()
{
    int a;
    int i = 2;
    int tool;
    scanf("%d", &a);
    while (a)
    {   
        tool = len(i);
        if (check(i,tool))
            a--;
        i++;
    }
    printf("%d", i-1);
}