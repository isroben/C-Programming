#include<stdio.h>
#include<string.h>

int main(){
    int n = 10;
    char str[n];

    printf("Enter the string you want.\n");
    scanf("%s", str);

    char vowels[] = "aeiou";

    for(int i=0; i<strlen(vowels); i++){
        for(int j=0; j<n; j++){
            if(vowels[i] == str[j]){
                printf("%c ", str[j]);
            }
        }
    }

    return 0;
}