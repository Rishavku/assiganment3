#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your character");
    scanf("%d",&a);
    if (a>='a' && a<='z')
    {
        printf("lowercase");
    }
    if (a>='A' && a<='Z')
    {
        printf("uppercase");
    }
    if (a>=1 && a<=9)
    {
        printf("digit");
    }
    else
    printf("special character");
    return 0;
}
