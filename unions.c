#include<stdio.h>
#include<string.h>

union Student {
    int id;
    int marks;
    char fav_char;
    char name[30];
};

int main(){
    union Student s1;

    s1.id = 10;
    s1.marks = 100;
    s1.fav_char = 'u';
    strcpy(s1.name, "Harry");

    printf("The id is %d", s1.id);

    return 0;
}