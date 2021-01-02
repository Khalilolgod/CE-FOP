#include <stdio.h>

int rem_by_11(int a)
{
    return a%11;
}

int num_of_devs(int a)
{
    int cnt = 0;
    for(int i = 1 ; i < a/2 + 1 ; i++)
    {
        if(!(a%i))
            cnt++;
    }
    return cnt+1;
}

void response(int n ,int m)
{
    switch (m)
    {
    case 1:
        printf("%d",rem_by_11(n));
        break;
    case 2:
        printf("%d",num_of_devs(n));
        break;
    case 3:
        printf("%d" , n*n);
        break;
    default:
        printf("Invalid Input");
        break;
    }
}



int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    response(n,m);
}