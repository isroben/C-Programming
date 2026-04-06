#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int data;
    struct ListNode* next;

};

void List(struct ListNode *ptr){
    printf("Elements are: ");
    while(ptr !=  NULL){
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return;
}

int main(){
    struct ListNode *head;
    struct ListNode *subsiquent1;
    struct ListNode *subsiquent2;

    head = (struct ListNode* )malloc(sizeof(struct ListNode));
    subsiquent1 = (struct ListNode* )malloc(sizeof(struct ListNode));
    subsiquent2 = (struct ListNode* )malloc(sizeof(struct ListNode));

    head->data = 9;
    head->next = subsiquent1;

    subsiquent1->data = 1;
    subsiquent1->next = subsiquent2;
    
    subsiquent2->data = 5;
    subsiquent2->next = NULL;

    List(head);

    free(head);
    free(subsiquent1);
    free(subsiquent2);

    return 0;
}