#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 5000)
    {
        printf("Cox's Bazar\n");   
        if(tk >= 10000)
        {
            printf("Saint Martin\n");
        }
        else
        {
            printf("Ferot Chole Asbo\n");
        }
    }
   else
   {
    printf("Khothao jabo na\n");
   }
    return 0;
}