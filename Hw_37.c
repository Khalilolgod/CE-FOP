#include <stdio.h>

void check(int d , int step_a , int step_b)
{
    int b_steps = 0;
    while (d > 0)
    {
        if(d%step_a == 0)
        {
            printf("Yes %d %d",d / step_a ,  b_steps);
            return;
        }
        d -= step_b;
        b_steps++;
    }
    printf("No");
}

int main()
{
    int d , a , b;
    scanf("%d %d %d", &d, &a ,&b);
    check(d , a ,b);
}