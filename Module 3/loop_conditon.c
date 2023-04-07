#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i=i+1)
    {
        if(i%2==0)
        {
            printf("%d-even\n",i);
        }
        else
        {
            printf("%d-Odd\n",i);
        }
    }
    return 0;
}   
// #include<stdio.h>
// int main()
// {
//     int i,n;  
//     scanf("%d",&n);  
//     for(i=1;i<=n;i=i+1)
//     {
//         if(i%2==0)
//         {
//             printf("%d-even\n",i);
//         }
//         else
//         {
//             printf("%d-Odd\n",i);
//         }
//     }
//     return 0;
// }   
// #include <stdio.h>
// int main()
// {
//     int a = 0, i;
//     for (i = 0;i < 5; i++)
//     {
//         continue;
//         a++;
//     }
//     printf("%d %d",i,a);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i = 0) {
//         printf("Hello\n");
//     }
//     return 0;
// }