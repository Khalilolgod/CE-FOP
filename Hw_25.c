#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d" ,&a,&b,&c );

    if(b>c)
    {
        int tmp = c;
        c = b;
        b = tmp;
    }
    if(a>c)
    {
        int tmp = a;
        a = b;
        b = c;
        c = tmp;
    }
    else if(a>b)
    {        
        int tmp = a;
        a = b;
        b = tmp;
    } 
    printf("%d %d %d",a , b ,c);
    
}