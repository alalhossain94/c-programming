// #include<stdio.h>
// int main()
// {
//     int N,row,col;
//     scanf("%d %d %d",&N,&row,&col);
//     int a[i][j];
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int flag=1;
//     if(row != col)
//     {
//         flag=0;
//     }
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             if(i == j && a[i][j] != 1)

//             {
//                 flag=0;
//             }
//             else if(a[i][j] != 0)
//             {
//                 flag=0;
//             }
            
//         }
//     }
//     if(flag == 1)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }


#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    int a[N][N];
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (i == j && a[i][j] != 1) 
            {
                flag = 0;
                break;
            } 
            else if (i != j && a[i][j] != 0) 
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
    return 0;
}
