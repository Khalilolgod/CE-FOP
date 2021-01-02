#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    for(int i = 1 ; i <= a ; i+=2)
    {
        b--;
        if(b == 0)
        {
            printf("%d",i);
            i = a;
        }
        
    }
    for(int i = 2 ; i <= a ; i+=2)
    {
        b--;
        if(b == 0)
        {
            printf("%d",i);
            i = a;
        }
        
    }

}