#include<stdio.h>
#include<limits.h>

int main(){
    int n = 7;
    int arr[n];

    printf("Enter the elements of array one by one ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN; // Minimum value initialized.
    int second = INT_MIN; // Minimum value initialized.

    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
    printf("The largest element in Arrat is: %d\n", largest);
    printf("The second largest element in Array is: %d\n", second);

    return 0;
}
