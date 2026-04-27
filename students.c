#include<stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main(){
    struct Student s[5];

    for(int i=0; i<5; i++){
        scanf("%s", s[i].name);
        scanf("%d", s[i].roll);
        scanf("%s", s[i].marks);
    }

    printf("Printing details of student");
    for(int i=0; i<5; i++){
        printf("Name: %s, Roll: %d, Marks: %d", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}