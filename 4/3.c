#include <stdio.h>

int main()
{
    char days[7][15] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"} ;
    int n,m;
    scanf("%d %d",&n,&m);
    int ans = (7 + n-(m%7))%7;
    printf("%s",days[ans]);

}