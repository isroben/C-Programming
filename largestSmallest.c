#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int max = *ptr;
    int min = *ptr;

    for(int i=1; i<n; i++){
        if(*(ptr+i) > max){
            max = *(ptr+i);
        }
        if(*(ptr+i) < min){
            min = *(ptr+i);
        }
    }
    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}