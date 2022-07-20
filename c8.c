#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter your year");
    scanf("%d",&n);
    if (n%4)
    {
        printf ("non leap year");

    }
    else
    printf("leap year");
    
    return 0;
}
