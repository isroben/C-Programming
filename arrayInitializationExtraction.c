#include<stdio.h>

int main(){
    // Inline Initialization.
    int arr1[5] = {1, 2, 3, 4, 5};

    // Initialization through Enternal input / User input.
    int arr2[5];
    printf("Enter the elements of array one by one: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr2[i]);
        printf(" ");
    }

    // single element extraction
    printf("\n Single extraction: %d", arr2[0]); // 0 --> can be replaced with all valid index

    // Extraction through loop
    printf("\nThe elements of array are: ");
    for(int i=0; i<5; i++){
        printf("%d, ", arr2[i]);
    }

    return 0;
}