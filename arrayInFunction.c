#include<stdio.h>

void arrayExtraction(int arr[], int n){

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){

    int arr[7] = {2, 9, 5, 1, 7, 2, 0};

    arrayExtraction(arr, 7);

    return 0;
}