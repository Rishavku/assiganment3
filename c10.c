#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c,s,n,d,e;
    printf("enter your cost price and selling price");
    scanf("%f %f",&c,&s);
    n= s-c;
    d=n*100;
    e=d/c;


    if (n>0)
    { 
        printf("profit %f", e);
        
    }
    
    else   
      { printf("loss %f",e);
      }
    return 0;
}
