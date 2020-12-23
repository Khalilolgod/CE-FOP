#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int w = a/2;
    int l = a - w;
    printf("%d",(w+1) * (l+1));
}