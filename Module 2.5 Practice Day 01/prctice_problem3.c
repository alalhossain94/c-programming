// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if(n>=0 && n%2 == 0)
//     {
//         printf("even");
//     }
//     else if (n>=0 && n%2 !=0)
//     {
//         printf("odd");
//     }
//     else
//     {
//         printf(" Sorry!You give a negetive int.");
//     }
//         return 0;
// }
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0 && n%2 == 0)
    {
        printf("even");
    }
    else if (n>=0 && n%2 !=0)
    {
        printf("odd");
    }
    else
    {
        printf(" Sorry!You give a negetive int.");
    }
        return 0;
}

