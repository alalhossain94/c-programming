#include <stdio.h>

int main() {
    char S[1001];
    fgets(S, sizeof(S), stdin);

    int lowercaseCount = 0;
    int uppercaseCount = 0;
    int spaceCount = 0;

    for (int i = 0; S[i] != '\0'; i++) 
    {
        if (S[i] >= 'a' && S[i] <= 'z') 
        {
            lowercaseCount++;
        } 
        else if (S[i] >= 'A' && S[i] <= 'Z') 
        {
            uppercaseCount++;
        } 
        else if (S[i] == ' ') 
        {
            spaceCount++;
        }
    }
    printf("Capital - %d\n", uppercaseCount);
    printf("Small - %d\n", lowercaseCount);
    printf("Spaces - %d\n", spaceCount);

    return 0;
}
