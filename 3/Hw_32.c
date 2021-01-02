#include <stdio.h>


int baghi_Mande(int avlie , int pardakhti)
{
    int bade_kharid = avlie;
    int kharid = pardakhti;
    while (kharid--)
    {
        if(bade_kharid % 10  != 0)
        {
            --bade_kharid;
            continue;
        }
        bade_kharid/=10;
        
    }
    return bade_kharid;
    
}

int main()
{
    int ghable_kharid,hazine;
    scanf("%d %d",&ghable_kharid , &hazine);
    printf("%d",baghi_Mande(ghable_kharid,hazine));
}