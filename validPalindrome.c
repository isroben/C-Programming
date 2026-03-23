#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

bool isPalindrome(char str[]){ // Two pointer approach
    int n = strlen(str);
    int st = 0, end = n-1;

    while(st < end){
        if(tolower(str[st] != tolower(str[end]))){
            return false;
        }
        st++; end--;
    }
    return true;
}

int main(){
    char str[20];

    printf("Enter the string: ");
    scanf("%s", str);

    bool result = isPalindrome(str);

    if(result){
        printf("valid palindrome!");
    }
    else{
        printf("Not a valid palindrome!");
    }

    return 0;
}