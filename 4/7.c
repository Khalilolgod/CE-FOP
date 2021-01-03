#include <stdio.h>

int is_prime(int a)
{
    int tmp = a + 1;
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

long int iterate(int arr[], int n, int len)
{
    int sum = n;
    long int max = 1;
    long int mult = 1;
    //printf("len:%d\n",len);
    for (int i = len- 1; i >= 0; i--)
    {
        sum -= arr[i];
        /*if (sum < 6 || sum>=3*arr[i] )
        {
            sum += arr[i];
            continue;
        }*/
        //printf("***i : %d \n",arr[i]);
        for (int j = i; j >= 0; j--)
        {
            sum -= arr[j];
            /*if (sum < 4 || sum>=2*arr[j])
            {
                sum += arr[j];
                continue;
            }*/
            //printf("**j : %d \n",arr[j]);
            for (int k = j; k >= 0; k--)
            {
                sum -= arr[k];
                /*if (sum < 2)
                {
                    sum += arr[k];
                    continue;
                }*/
                //printf("*k : %d \n",arr[k]);
                for (int l = k; l >= 0; l--)
                {
                    if (sum - arr[l] == 0)
                    {
                        //printf("l : %d \n",arr[l]);
                        mult = arr[i] * arr[j] * arr[k] * arr[l];
                        if (mult > max)
                        {
                            max = mult;
                            //printf("i : %d ,  j : %d , k : %d , l : %d \n",arr[i],arr[j],arr[k],arr[l]);
                            //printf("max: %ld\n",max);
                        }
                    }
                }
                sum += arr[k];
            }
            sum += arr[j];
        }
        sum += arr[i];
    }
    return max;
}

int main()
{
    int primes[720];
    int n ;

    for(int i = 3018 ; i <4018 ; i++)
    {
    //scanf("%d", &n);
    int len = find_primes(i,primes);
    //printf("%d\n",primes[len-1]);
    /*for(int i = 0 ; i < len ; i++)
    {
        printf("%d ,",primes[i]);
    }*/
    printf("%ld\t",iterate(primes,i,len));
    }
}