#include <stdio.h>
int main()
{
    int a , b;
    int dade = 0;
    int kande = 0;
    for (int i = 0 ; i <3 ;i ++ )
    {
        scanf("%d %d", &a,&b);
        dade+= a/10;
        kande += b;
    }
    
    if (dade < kande)
    {
        printf("Demokritos, Chatrbaz bozorg!");
    }
    else
    {
        printf("Demokritose goshne!");
    }
    
}