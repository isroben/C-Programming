#include <stdio.h>
#include <string.h>

void RRCAMPUS(char str[]){
    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return;
}

void RRBCA(char str[]){
    int n = strlen(str);

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return;
}

int main()
{
    char str1[] = "RRCAMPUS";
    RRCAMPUS(str1);

    char str2[] = "RRBCA";
    RRBCA(str2);

    return 0;
}