#include<stdio.h>

void copyElements(int arr1[], int arr2[], int n){

    for(int i=0; i<n; i++){
        arr2[i] = arr1[i];
    }
    return;
}

int main(){
    int n = 7;

    int arr1[7] = {3, 9, 5, 0, 6, 1, 3};
    int arr2[n];

    copyElements(arr1, arr2, n);

    printf("The elements of arr2 are: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }

    return 0;

}