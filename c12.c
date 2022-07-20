#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a  ;
    printf("ENTER");
    scanf("%c",&a) ;   
    if (a>='a'&& a<='z')
    {
        printf("lower case");
    }
    if (a>='A'&& a<='Z')
    {
        printf("upper case");
    }
    
    
    return 0;
}
