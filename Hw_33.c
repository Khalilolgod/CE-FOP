#include <stdio.h>

void aflatun_gav(int stairs, int step_size)
{
    //int stairs_cpy = stairs;
    int steps = 0;
    if (stairs % 2)//if stairs are not sth*2
    {
        stairs -= 1;
        ++steps;
    }
    int c_steps = (stairs/2)+1;
    steps += c_steps;
    for (int i = 0; c_steps > i ; i++)
    {
        if(!(steps % step_size))//if steps are sth*step_size
        {
            printf("%d" , steps);
            return ;
        }
        ++steps;

    }
    printf("Impossible");
}

int main()
{
    int stairs, step;
    scanf("%d %d", &stairs, &step);
    aflatun_gav(stairs, step);
}