#include <stdio.h>

int power(int a, int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= a;
    }
    return ans;
}

int is_prime(int a)
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

int find_primes(int a, int arr[])
{
    int i = 0;
    arr[i] = 2;
    i++;
    for (int num = 3; num < a; num+=2)
    {
        if (is_prime(num))
        {
            arr[i] = num;
            i++;
        }
    }
    return i;
}

int iterate(int arr[], int n, int len)
{
    int sum;
    int max = 0;
    int mult = 1;
    printf("len:%d\n",len);
    for (int i = len-1; i >= 0; i--)
    {
        sum = n;
        sum -= arr[i];
        if (sum < 7)
        {
            sum += arr[i];
            continue;
        }
        printf("***i : %d \n",i);
        for (int j = i; j >= 0; j--)
        {
            sum -= arr[j];
            if (sum < 5)
            {
                sum += arr[j];
                continue;
            }
            printf("**j : %d \n",j);
            for (int k = j; k >= 0; k--)
            {
                sum -= arr[k];
                if (sum < 3)
                {
                    sum += arr[k];
                    continue;
                }
                printf("*k : %d \n",k);
                for (int l = k; l >= 0; l--)
                {
                    if (sum - arr[l] == 0)
                    {
                        printf("k : %d \n",l);
                        mult = i * j * k * l;
                        if (mult > max)
                        {
                            max = mult;
                        }
                    }
                }
            }
        }
    }
    return max;
}

int main()
{
    int primes[100];
    int n = 10;
    //scanf("%d", &n);
    int len = find_primes(n,primes);
    printf("%d",iterate(primes,10,len));
}