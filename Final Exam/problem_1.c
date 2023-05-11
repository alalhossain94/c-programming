#include<stdio.h>
int main() 
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) 
    {
        int S, A, B, C;
        scanf("%d %d %d %d", &S, &A, &B, &C);
        int Missing_number= S - (A + B + C);
        printf("%d\n", Missing_number);
    }
    return 0;
}