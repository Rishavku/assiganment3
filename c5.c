#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if (n>=100 && n<=999)
    {
        printf("three digit number");
    }
    else
    printf("not three digits number");
    return 0;
}
