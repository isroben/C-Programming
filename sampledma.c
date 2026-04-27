#include<stdio.h>

int main(){
    int* arr;

    arr = (int* ) malloc(2*sizeof(int));

    arr = (int* ) realloc(arr, 5*sizeof(int));

    return 0;
}