#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum = 0;
    int tmp;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("%d", sum);
}