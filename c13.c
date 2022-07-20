#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ;
    printf("enter your number");
    scanf("%d",&a);
    if (a%2==0  && a%3==0)
    {
        printf("divisible");
    }
    else    
    printf("not divisible");
    
    return 0;
}
