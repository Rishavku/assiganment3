#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ;
    printf("enter your number");
    scanf("%d",&a);
    if (a<0)
    {
        printf("negative number")   ;
    }
    if (a>0)
    {
        printf("positive number");
    }
    if (a==0)
    {
        printf("zero");
    }
    
    return 0;
}
