#include<stdio.h>

struct Person {
    char name[30];
    int age;
    char address[30];
};

int main(){
    int n;

    printf("Enter the number that you want to keep records: ");
    scanf("%d", &n);
    getchar();

    struct Person p[n];

    for(int i=0; i<n; i++){
        printf("Enter Name of person: ");
        fgets(p[i].name, 30, stdin);

        printf("Enter the age of person: ");
        scanf("%d", &p[i].age);

        getchar();

        printf("Enter the address of person: ");
        fgets(p[i].address, 30, stdin);
    }

    printf("\nPrinting the details of persons: ");
    for(int i=0; i<n; i++){
        if(p[i].age > 18){
            printf("\nName of person: %s", p[i].name);
            printf("Age of person is: %d", p[i].age);
            printf("\nAddress of person: %s", p[i].address);

            printf("\n");
        }
    }

    return 0;
}