#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter three number\n");

    scanf("%d %d %d",&a,&b,&c);
    if (a>b  && a>c)
    {
        printf("%d\n",a);
    }
    if (b>a&& b>c)
    {
     printf("%d\n",b);
    }
    if (c>=a&&c>=b)
    {
        printf("%d\n",c);
    }
    
    
    return 0;
}
