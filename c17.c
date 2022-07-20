#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf ("enter your length of the side of the tringle");
scanf("%d %d %d",&a,&b,&c);
if (a+b>c && b+c>a && c+a>b)
{
    printf("not vaid");
}
else
printf("valid");

    return 0;
}
