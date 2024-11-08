#include "LinkedList.h"


node* createNode(unsigned int data)
{
	node* newNode = new node;
	newNode->data = data;
	newNode->next = nullptr;
	return newNode;
}

void insertAtHead(node** head, node* newNode)
{
	if (*head == nullptr)
	{
		*(head) = newNode;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
}
void insertAtTail(node** head, node* newNode)
{
	if (*head == nullptr)
	{
		*(head) = newNode;
	}
	else
	{
		node* n = *(head);
		while (n->next != nullptr)
		{
			n = n->next;
		}
		n->next = newNode;
	}
}

void deleteNode(node** head, node* nodeToDel)
{
	if (*head == nullptr || nodeToDel == nullptr)
	{
		return;
	}
	else if (*head == nodeToDel) 
	{
		*head = (*head)->next;
		delete nodeToDel;
		return;
	}
	else
	{
		node* n = *head;
		while (n->next != nodeToDel && n->next != nullptr)
		{
			n = n->next;
		}
		if (n->next == nodeToDel)
		{
			n->next = nodeToDel->next;
			delete(nodeToDel);
		}
	}
}