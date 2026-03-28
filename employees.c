#include<stdio.h>
#include<string.h>

struct Employee {
    int empid;
    char name[20];
    int age;
    float salary;
    
};

void sortRecords(struct Employee* e, int n){
    struct Employee curr;
    
    for(int i=1; i<n; i++){
        curr = e[i];
        int prev = i-1;

        while(prev >= 0 && strcmp(e[prev].name, curr.name)>0){
            e[prev+1] = e[prev];
            prev--;
        }
        e[prev+1] = curr;
    }

}

int main(){
    int n;
    printf("Enter the Number of records you want to keep: ");
    scanf("%d", &n);

    struct Employee e[n];

    for(int i=0; i<n; i++){
        printf("\nEnter employee id, age and salary: ");
        scanf(" %d %d %f", &e[i].empid, &e[i].age, &e[i].salary);

        getchar();
        printf("Enter the name of Employee: ");
        fgets(e[i].name, 20, stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0'; 
    }

    sortRecords(e, n);
 

    for(int i=0; i<n; i++){
        printf("\nEmployee id: %d", e[i].empid);
        printf("\nName: %s", e[i].name);
        printf("\nAge: %d", e[i].age);
        printf("\nSalary: %.2f", e[i].salary);

        printf("\n");
    }

    return 0;
}