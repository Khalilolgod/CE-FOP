#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int tar;
    scanf("%d %d",&n , &tar);

    char result[1024] = {1};
    int len_result = 1;
    int tmp_mul = 0;
    int mul = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < len_result; j++)
        {
            mul = i * result[j] + tmp_mul;
            result[j] = mul % 10;
            tmp_mul = mul / 10;
        }
        if (tmp_mul)
        {
            while (tmp_mul)
            {
                result[len_result] = tmp_mul % 10;
                tmp_mul /= 10;
                len_result++;
            }
            tmp_mul = 0;
        }
    }
    int cntr = 0;
    for (int k = 0; k < len_result; k++)
    {
        if (result[k] == tar)
            cntr++;
    }
    printf("%d",cntr);
    
}
