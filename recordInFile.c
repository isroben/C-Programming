#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char address[50];
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();  // clear newline

    struct Student st;

    // Open file for writing (text mode)
    fp = fopen("std.dat", "w");
    if(fp == NULL) {
        printf("Cannot open file!\n");
        return 0;
    }

    // Take input and write to file
    for(int i = 0; i < n; i++) {
        printf("\nEnter roll number: ");
        scanf("%d", &st.roll);
        getchar();

        printf("Enter name: ");
        fgets(st.name, 50, stdin);
        st.name[strcspn(st.name, "\n")] = 0;

        printf("Enter address: ");
        fgets(st.address, 50, stdin);
        st.address[strcspn(st.address, "\n")] = 0;

        // Write record in text format
        fprintf(fp, "%d\n%s\n%s\n", st.roll, st.name, st.address);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("std.dat", "r");
    if(fp == NULL) {
        printf("Cannot open file!\n");
        return 0;
    }

    printf("\n--- Students with Even Roll Numbers ---\n");

    while(fscanf(fp, "%d\n", &st.roll) != EOF) {
        fgets(st.name, 50, fp);
        st.name[strcspn(st.name, "\n")] = 0;

        fgets(st.address, 50, fp);
        st.address[strcspn(st.address, "\n")] = 0;

        if(st.roll % 2 == 0) {
            printf("\nRoll: %d\n", st.roll);
            printf("Name: %s\n", st.name);
            printf("Address: %s\n", st.address);
        }
    }

    fclose(fp);
    return 0;
}