#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  a;
    printf ("enter your month");
    scanf("%d",&a);
    if (a= 1||3||5||7||8||10||12)
    {
        printf("31 days");
            
    }

    if (a= 4||6||9||11)
    {
        printf("30 days");
        
    
    
}
    if (a=2)
   { 
        printf("28/29 days");
        
}

    

    return 0;
}
