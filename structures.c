#include<stdio.h>

struct Student {
    int roll;
    char name[20];
    char address[20];
};

int main(){
    struct Student st[10];

    for(int i=0; i<10; i++){
        printf("\nEnter the roll no, name and adress one by one: ");
        scanf(" %d %s %s", &st[i].roll, st[i].name, st[i].address);
    }

    for(int j=0; j<10; j++){
        printf("\nRoll: %d",st[j].roll);
        printf("\tName: %s",st[j].name);
        printf("\tAddress: %s",st[j].address);
    }

    return 0;
}