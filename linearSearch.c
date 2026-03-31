#include<stdio.h>

int main(){
    int n = 4, num;

    printf("Enter the number you want to seach: ");
    scanf("%d", &num);

    int arr[4][4] = {{0,1,2,3},
                     {4,5,6,7}, 
                     {8,9,10,11}, 
                     {12,13,14,15}};

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == num){
                printf("The %d lies on %d,%d index.\n", num, i,j);
            }
        }
    }

    return 0;
}