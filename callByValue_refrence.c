#include<stdio.h>

void increment(int n){
    n++;
}

void decrement(int *a){
    *a = *a + 1;
}

int main(){
    int a = 5;

    printf("\nThe value of n is: %d", a);
    increment(a); // call by value
    printf("\nThe value of a is: %d", a);


    printf("\nThe value of n is: %d", a);
    decrement(&a); // call by refrence
    printf("\nThe updated value of a is: %d", a);

    return 0;
}