#include<stdio.h>
#include<string.h>

struct Books {
    long long ISBN;
    char Title[50];
    char Author[30];
    float cost;
};

int main(){
    int n = 1;

    char author[30] = "Subin Bhattrai";

    struct Books b[n];

    for(int i=0; i<n; i++){
        printf("Enter the ISBN: ");
        scanf("%lld", &b[i].ISBN);

        getchar();
        printf("Enter the Title of Book: ");
        fgets(b[i].Title, 50, stdin);

        printf("Enter the Author of Book: ");
        fgets(b[i].Author, 30, stdin);
        b[i].Author[strcspn(b[i].Author, "\n")] = 0;

        printf("Enter the cost of book: ");
        scanf("%f", &b[i].cost);
    }

    printf("\nPrinting the detail of book: \n");
    for(int i=0; i<n; i++){
        if(strcmp(b[i].Author,author) == 0){
            printf("ISBN of the book: %lld", b[i].ISBN);
            printf("\nTitle of the book: %s", b[i].Title);
            printf("Author of book: %s", b[i].Author);
            printf("\nCost of the book: %f",b[i].cost);
        }
        printf("\n");
    }

    return 0;
}