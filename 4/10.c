#include <stdio.h>

int is_prime(int a )
{
    int tmp = a + 1;
    if (a % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i * i < tmp; i += 2)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int check_devs(int a)
{
    int num_of_primes = 0;
    int the_prime ;
    if(a%2 == 0)
    {
        num_of_primes++;
        the_prime = 2;
    }
    int b = a/2+1;
    for(int i = 3 ; i < b; i+=2)
    {
        
        if((a%i == 0) && is_prime(i))
        {
            num_of_primes++;
            the_prime = i;
            if(num_of_primes > 1)
            {
                return 1;
            }
        }
    }
    if(num_of_primes == 1)
    {
        return the_prime;
    }
}


int main()
{
    int n ;
    scanf("%d",&n);
    if(is_prime(n))
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",check_devs(n));
    }
    
}