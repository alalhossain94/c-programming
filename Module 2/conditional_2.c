#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 100)
    {
        printf("Burger Khabo");
    }
    else if(tk >= 50) 
    {
        printf("Fuska khabo"); 
    }
    else if(tk >= 20)
    {
        printf("Cha khabo");
    }
    else                                                 
    {
        printf("khabo na");
    }
    return 0;
}                                                   