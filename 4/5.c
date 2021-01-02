#include <stdio.h>
#include <math.h>

int is_prime(int a)
{
    int sq_rt = sqrt(a) + 1; 
    int flag = 1;
    for(int i = 2 ; i < sq_rt ; i++)
    {
        if(a%i == 0)
        {
            return 0;
        }
    }
    return flag;
}

int main()
{
    int n;
    scanf("%d",&n);
    int cnt = 0;
    for(int i = 2; i <= n/2 ; i++ )
    {
        if( is_prime(i) && is_prime(n-i))
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}