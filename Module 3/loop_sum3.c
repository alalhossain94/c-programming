// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     int i;
//     scanf("%d",&i);
//     for(i=1;i<=5;i=i+1)
//     {
//         sum+=i;
//         printf("%d\n",sum);
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int sum=0;
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        sum+=i;
    }                                 
    printf("%d",sum);
    return 0;
}