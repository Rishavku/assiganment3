#include<stdio.h>
int main()
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if (n%5==0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
    
    return 0;
}
