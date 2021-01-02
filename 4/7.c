#include <stdio.h>

int power(int a,int n)
{
    int ans= 1;
    for( int i = 0 ; i < n ; i++)
    {
        ans*=a;
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",power(n/4 , 4-n%4)* power((n/4 +1),n%4));
}