#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);

    int ages[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &ages[i]);
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(ages[i]>ages[j])
            {
                int temp=ages[i];
                ages[i]=ages[j];
                ages[j]=temp;
            }
        }
    }
    int middle1 = N / 2;
    int middle2 = (N / 2) + 1;
    if (N % 2 == 0) 
    {
        printf("%d %d\n", ages[middle1 - 1], ages[middle2 - 1]);
    } 
    else 
    {
        middle1 = (N + 1) / 2;
        printf("%d\n", ages[middle1]);
    }
    return 0;
}

