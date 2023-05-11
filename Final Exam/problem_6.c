#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int tigerWins = 0;
    int pathanWins = 0;
    for (int i = 0; i < N; i++) 
    {
        int X1, X2;
        scanf("%d %d", &X1, &X2);
        if (X1 > X2) 
        {
            tigerWins++;
        } 
        else if (X2 > X1) 
        {
            pathanWins++;
        }
    }
    if (tigerWins > pathanWins) 
    {
        printf("Tiger\n");
    } 
    else if (pathanWins > tigerWins) 
    {
        printf("Pathan\n");
    } 
    else {
        printf("Draw\n");
    }
    return 0;
}
