#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
       printf("greater number is %d",a);     
    }
    
    
    else  
    {
        printf("greater number is %d",b);
    }
    
    
    return 0;
}
