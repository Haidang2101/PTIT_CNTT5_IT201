#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node *head) {
    if (head == NULL) {
        return;
    }
    Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

Node *findMiddle(Node *head) {
    if (head == NULL) {
        printf("Danh sach rong");
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    Node *one = createNode(5);
    Node *two = createNode(4);
    Node *three = createNode(3);
    Node *four = createNode(2);
    Node *five = createNode(1);
    Node *six = createNode(6);

    Node *head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;

    Node *middle = findMiddle(head);
    if (middle != NULL) {
        int po = 1;
        Node *temp = head;
        while (temp != middle) {
            temp = temp->next;
            po++;
        }
        printf("node %d: %d", po, middle->data);
    }

    return 0;
}
