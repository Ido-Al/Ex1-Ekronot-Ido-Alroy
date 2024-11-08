#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node
{
    unsigned int data;
    node* next;
}node;

node* createNode(unsigned int data);

void insertAtHead(node** head, node* newNode);
void insertAtTail(node** head, node* newNode);

void deleteNode(node** head, node* nodeToDel);




#endif // LINKEDLIST_H