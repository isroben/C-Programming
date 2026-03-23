#include<stdio.h>

void findDuplicate(int arr[], int n){
    int freq[100] = {0};
    
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    printf("Here are the duplicate elements: \n");
    for(int i=0; i<100; i++){
        if(freq[i] > 1){
            printf("%d ", i);
        }
    }

    return;
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    findDuplicate(arr, n);

    return 0;

}