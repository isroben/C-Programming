#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "RRCAMPUS";
    int n = strlen(str);

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}