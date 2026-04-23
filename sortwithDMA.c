#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int* arr = (int* ) malloc(n * sizeof(int));

    if (arr == NULL){
        printf("Memory allocation failed!");
        return 0;
    }

    printf("Enter the elements of array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }

    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] < curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }

    int* ptr = arr;
    printf("Printing the elements of array: ");
    for(int i=0; i<n; i++){
        printf("%d ", *(ptr+(n-1)-i));
    }

    return 0;
}