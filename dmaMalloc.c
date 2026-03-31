#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, extra;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    printf("Enter extra elements to add: ");
    scanf("%d", &extra);

    arr = realloc(arr, (n + extra) * sizeof(int));

    printf("Enter new elements:\n");
    for(int i = n; i < n + extra; i++) {
        scanf("%d", (arr + i));
    }

    printf("All elements:\n");
    for(int i = 0; i < n + extra; i++) {
        printf("%d ", *(arr + i));
    }

    int *arr2 = (int*) calloc(5, sizeof(int));

    printf("\nArray created using calloc:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    free(arr);
    free(arr2);

    return 0;
}