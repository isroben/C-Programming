#include<stdio.h>
#include<string.h>

struct employee {
    int empId;
    char emp_name[30];
    float emp_salary;
};

int main(){
    FILE* fp;
    int n;

    printf("Enter the number of employees that you want to store: ");
    scanf("%d", &n);

    struct employee e;

    fp = fopen("emp.dat", "w");
    if(fp == NULL){
        printf("failed to load file");
        return 0;
    }

    for(int i=0; i<n; i++){
        printf("Enter the Id of Employee: ");
        scanf("%d", &e.empId);

        getchar();

        printf("Enter the name of Employee: ");
        fgets(e.emp_name, 30, stdin);

        printf("Enter the salary of Employee: ");
        scanf("%f", &e.emp_salary);

        fprintf(fp, "%d %s %f", e.empId, e.emp_name, e.emp_salary);
        printf("\n");
    }
    fclose(fp);

    fp = fopen("emp.dat", "r");
    if(fp == NULL){
        printf("failed to load file");
        return 0;
    }
    

    printf("--- Printing the details of employees ---\n");

    while(fscanf(fp, "%d ", &e.empId) != EOF){
        fgets(e.emp_name, 30, fp);
        e.emp_name[strcspn(e.emp_name, "\n")] = 0;

        fscanf(fp, "%f ", &e.emp_salary);

        printf("ID: %d\t", e.empId);
        printf("Name: %s\t", e.emp_name);
        printf("Salary: %.2f\t", e.emp_salary);
        
        printf("\n");
    }


    return 0;
}

