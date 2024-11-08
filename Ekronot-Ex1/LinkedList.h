#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node
{
    unsigned int data;
    node* next;
}node;

node* createNode(unsigned int data); // funtion to create node

void insertAtHead(node** head, node* newNode); // function to insert node at the top
void insertAtTail(node** head, node* newNode); // funtion to insert node at the end

void deleteNode(node** head, node* nodeToDel); // function to delete node based off of pointer




#endif // LINKEDLIST_H