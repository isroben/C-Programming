#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "Hello World!";

    // strlen()
    int len = strlen(str);
    printf("\nThe length of the given string is: %d", len);

    // strcpy()
    char newStr[len];
    strcpy(newStr, str);
    printf("\nThe newString is %s", newStr);

    // strcat()
    char greeting[] = "Hello, ";
    char name[] = "Rohan";

    strcat(greeting, name);
    printf("\nThe Concatnated string is: %s", greeting);

    // strcmp()
    char str1[] = "Apple";
    char str2[] = "Orange";

    int result = strcmp(str1, str2);

    if(result == 0){
        printf("\nThese strings are same and equal.");
    }
    else if(result > 0){
        printf("\nThe First string is greater than the second one");
    }
    else{
        printf("\nThe First string is less than second string one");
    }


    return 0;
}