#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee *emp;
    emp = (struct Employee*) malloc(n * sizeof(struct Employee));

    if(emp == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    for(int i = 0; i < n; i++) {
        printf("\nEnter ID, Name, Salary: ");
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }

    struct Employee temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(emp[i].salary > emp[j].salary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    printf("\nEmployee Details (Sorted by Salary):\n");
    for(int i = 0; i < n; i++) {
        printf("%d %s %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    free(emp);

    return 0;
}