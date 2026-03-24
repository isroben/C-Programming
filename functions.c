#include<stdio.h>

void newFunction(); // Function decleration

int main(){

    newFunction(); // Function call

    return 0;
}

void newFunction(){ // Function defination
    printf("This is a userdefined function of type void");
    
    return;
}