#include<stdio.h>

int main(){
    int st = 1, end = 100;

    for(int i=st; i<end; i++){
        for(int j=st; j<=(i/j); j++){
            if(!(i%j)) break;
            if(j> (i/j)){
                printf("%d is prime\n", i);
            }
        }
    }
    return 0;
}