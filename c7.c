#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a,b,c;
    printf("enter you three number\n");
    scanf("%d %d %d",&a, &b, &c);
    n=b*b-4*a*c;
    if (n>0)
    {
        printf("real & distinct");
    }

    if (n<0)
    {
        printf("imaginary root");
    }
    if (n=0)
    {
        printf("real & equal");
    }
    
    
    return 0;
}
