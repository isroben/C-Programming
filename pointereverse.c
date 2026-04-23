#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    int *ptr = arr;

    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", (ptr+i));
    }

    printf("Array in reverse order: ");
    for(int i=0; i<n; i++){
        printf("%d ", *(ptr+(n-i-1)));
    }

    return 0;
}