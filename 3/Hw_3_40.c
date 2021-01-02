#include<stdio.h>
int main()
{
    int a[10243],n,counter,temp,i;
    a[0]=1;
    counter=0;
    printf("Enter the number to Find Factorial: ");
    scanf("%d",&n);
    for(; n>=2; n--)
    {
        temp=0;
        for(i=0; i<=counter; i++)
        {
            temp=(a[i]*n)+temp;
            a[i]=temp%10;
            temp=temp/10;
        }
        while(temp>0)
        {
            a[++counter]=temp%10;
            temp=temp/10;
        }
    }
    for (int f = 0 ; f < 10 ; f++)
    {
        int cntr = 0;
        for (int k = 0; k <= counter; k++)
        {
            if (a[k] == f)
                cntr++;
        }
        printf("%d,%d \t",f,cntr);
    }
    return 0;
}