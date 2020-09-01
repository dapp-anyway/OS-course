#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

void print_list(struct Node *node) {
    while (node != NULL) {
        printf(" %d ", node->value);
        node = node->next;
    }
}

void insert_node(struct Node *head, int index, int val) {

    struct Node *node = head;
    struct Node *new = (struct Node *) malloc(sizeof(struct Node));

    for (int i = 0; i < index-1; i++) {
        node = node->next;
    }

    new->value = val;
    new->next = node->next;
    node->next = new;
}

void delete_node(struct Node *head, int index) {

    if (index == 1) {
        head->next = head->next->next;
        return;
    }

    struct Node *n1 = head;
    struct Node *n2 = n1->next;

    for (int i = 0; i < index - 2; i++) {
        n1 = n2;
        n2 = n1->next;
    }

    n1->next = n2->next;

}

int main() {

    struct Node *head = NULL;
    struct Node *second = NULL;

    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));

    head->value = 5;
    head->next = second;

    second->value = 7;
    second->next = NULL;

    insert_node(head, 1, 3);
    insert_node(head, 2, 4);
    insert_node(head, 3, 6);

    delete_node(head, 1);
    print_list(head);

    return 0;
}