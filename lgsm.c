#include<stdio.h>

int main(){
    int* arr;

    arr = (int*) malloc(7*sizeof(int));

    for(int i=0; i<7; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i=1; i<7; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Largest number: %d", max);
    printf("Smallest number: %d", min);

    return 0;
}