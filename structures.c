#include<stdio.h>
#include<string.h>

struct Student {
    int roll;
    char name[25];
    char address[25];
};

int main(){
    struct Student st[2];

    for(int i=0; i<10; i++){
        printf("\nEnter the roll no, name and adress one by one: ");
        scanf(" %d", &st[i].roll);
        
        getchar(); // buffering
        
        printf("Enter the Name of Student: ");
        fgets(st[i].name, 25, stdin);
        printf("Enter the address of student: ");
        fgets(st[i].address, 25, stdin);
    }

    for(int j=0; j<10; j++){
        printf("\nRoll: %d",st[j].roll);
        printf("\tName: %s",st[j].name);
        printf("\tAddress: %s",st[j].address);
    }

    return 0;
}