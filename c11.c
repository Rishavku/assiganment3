#include   <stdio.h>
int main(int argc, char const *argv[])
{
    int h,e,m,s,ss;
    printf ("enter your subject number");
    scanf("%d %d %d %d %d",&h,&e,&m,&s,&ss);

    if (h>=33 & h<=100 && e>=33 & e<=100 && m>=33 & m<=100 && s>=33 & s<=100 && ss>=33 & ss<=100)
    {
        printf("PASS");

    }
    else
    printf("FAIL");
    return 0;
}
