#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insert_node(struct node **head, int value, int position) {
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    if (position == 1) {
        new_node->next = *head;
        *head = new_node;
    } else {
        struct node *current = *head;
        for (int i = 1; i < position - 1 && current != NULL; i++) {
            current = current->next;
        }
        if (current == NULL) {
            printf("Position out of bounds.\n");
            free(new_node);
        } else {
            new_node->next = current->next;
            current->next = new_node;
        }
    }
}

void delete_node(struct node **head, int value) {
    struct node *current = *head, *prev = NULL;

    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Node with value %d not found.\n", value);
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }
    free(current);
}

int main(){
    int n, value, pos;
    printf("Enter the number of nodes to be allotted: ");
    scanf("%d",&n);
    struct node *new_node, *current, *head = NULL;
    for(int i = 0; i < n; i++){
        struct node *new_node = (struct node*)malloc(sizeof(struct node));

        printf("Enter the value of the node: ");
        scanf("%d",&value);

        new_node->data = value;
        new_node->next = NULL;

        if(head == NULL){
            head = new_node;
        } else {
            current->next = new_node;
        }
        current = new_node;
    }

    current = head;
    while(current != NULL){
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Insertion
    printf("Enter the value to insert and position: ");
    scanf("%d %d", &value, &pos);
    insert_node(&head, value, pos);

    // Display after insertion
    current = head;
    while(current != NULL){
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Deletion
    printf("Enter the value to delete: ");
    scanf("%d", &value);
    delete_node(&head, value);

    // Display after deletion
    current = head;
    while(current != NULL){
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}
