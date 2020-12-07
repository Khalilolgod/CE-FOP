#include <stdio.h>

int main()
{

    int a,b,c;
    scanf("%d %d %d",&a , &b , &c);
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
            {
                printf("Possible");      
            }
            else
            {
               printf("Impossible") ;
            }
        }
        else
        {
           printf("Impossible") ;
        }
    }
    else
    {
       printf("Impossible") ;
    }
    return 0;
}