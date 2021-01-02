#include<stdio.h>
int main()
{
    int a,b;
    char* days[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    scanf("%d %d",&a,&b);
    int day = (a+b)%7;
    printf("%s",days[day]);
    
}