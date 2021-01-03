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

int sth(int a,int n)
{
    if(n==0)
        return 1;
    return (power(a,n+1)-1)/(a-1);
}

int sum_of_devs(int a)
{
    int sum = 1;
    int num_of_times = 0;
    while(a%2 == 0)
    {
        num_of_times++;
        a/=2;
    }
    //printf("%d^%d \n",2,num_of_times);
    sum *= sth(2,num_of_times);
    //printf("%d\n",sum);
    int i = 3;
    while ( i <= a && a>1)
    {
        num_of_times = 0;
        while(a%i == 0)
        {
            a/=i;
            num_of_times++;
        }
        //printf("%d^%d\n",i,num_of_times);
        sum*=sth(i,num_of_times);
        //printf("%d\n",sth(i,num_of_times));
        i+=2;
    }
    
    return (sum);
}

int main()
{
    int sum = 0;
    int max = 0;
    int n;
    scanf("%d",&n);
    int a = (n-1)/2;
    int b;
    for(int i = 1; i < a ; i++)
    {
        b = (n - i)/2;
        for(int j = 1; j < b ; j++)
        {
            sum = sum_of_devs(i) + sum_of_devs(j) + sum_of_devs(n - i - j);
            if (sum > max)
                max = sum;
        }
    }
    printf("%d",max);


}