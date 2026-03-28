#include<stdio.h>
#include<string.h>

void sortString(char str[][30], int len){
    char curr[30];
    for(int i=1; i<len; i++){
        strcpy(curr, str[i]);
        int prev = i-1;

        while(prev >= 0 && strcmp(str[prev],curr)>0){
            strcpy(str[prev+1],str[prev]);
            prev--;
        }
        strcpy(str[prev+1],curr);
    }
}

int main(){
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char str[n][30];
    printf("Enter the Strings: ");
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }

    sortString(str, n);

    printf("Strings in alphabetical order: \n");
    for(int i=0; i<n; i++){
        printf("\n%s", str[i]);
    }

    return 0;
}