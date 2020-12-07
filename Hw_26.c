#include <stdio.h>
int main()
{
    int sal ;
    scanf("%d",&sal);
    if(sal % 3 == 0)
    {
        if(sal % 18 == 0)
        {
            printf("Motenaferam!");
        }
        else
        {
            printf("Asheghesham!");
        }
        
    }
    else
    {
        printf("Mamooli.");
    }
    
}