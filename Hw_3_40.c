#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void s_2_i(char *a)
{
    //to change the element from 'a' -> 'a'
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = a[i] - '0';
    }
}

int intlen(int a)
{
    //to get the length of the int
    int len = 0;
    while(a/10)
    {
        len++;
    }
    return len;
}

void multiply(char *a, char *b, char *c)
{
    //to do the multiplication
    return;
}

//TODO
//factorial
//TODO
//char cnt


int main()
{
    //geting inputs and changing the chars to numbers '23' -> 23
    unsigned char result_size = 128;
    char a[128];
    char b[5];
    char result[result_size];
    scanf("%s", &a);
    s_2_i(a);
    scanf("%s", &b);
    s_2_i(b);

    //some vars used in both memory aloccation and the multiplication
    char mul;
    char tmp = 0;
    char len_a = strlen(a);
    char len_b = strlen(b);
    // just trying to save some memory
    char *aa = (char *)malloc(len_a * sizeof(char));
    strcpy(aa, a);
    free(a);
    char *bb = (char *)malloc(len_b * sizeof(char));
    strcpy(bb, b);
    free(b);
    //inirializint the result array
    for (int i = 0; i < result_size ; i++){ 
        result[i] = 0; 
    }

    // iterating through the results and saving the multiplication 
    unsigned char index;
    for (int i = 0; i < len_b; i++)
    {
        index = result_size - 1 - i;
        for (int j = 0; j < len_a; j++)
        {
            printf("first: %d", result[index]);
            mul = (bb[len_b-1-i] * aa[len_a-1-j]) + tmp + result[index];
            tmp = mul / 10;
            mul = mul % 10;
            result [index] = mul;
            printf ("index : %d mul : %d  mul1 : %d tmp : %d , res : %d \n", index , (bb[i] * aa[j]) , mul , tmp ,result[index] );
            index--;
        }
        if(tmp)
            result[index] = tmp;
    }

    //skiping the zeros
    //TODO must delete the zeros
    int i = 0 ;
    while(!result[i])
    {
        i++;
    }
    //showing the answers
    for( ; i < result_size ; i++)
        printf("%d %d \t", i, result[i]);

    free(aa);
    free(bb);
}
