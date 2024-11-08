#include "Stack.h"


void push(Stack* s, unsigned int element)
{
	node* n = createNode(element);
	n->next = s->head;
	s->head = n;
}
int pop(Stack* s)
{
	if (s->head == nullptr)
	{
		return -1;
	}
	int r = s->head->data;
	node* temp = s->head;
	s->head = s->head->next;
	delete(temp);
	return r;
}

void initStack(Stack* s)
{
	s->head = nullptr;
}
void cleanStack(Stack* s)
{
	node* n = s->head;
	while (n != nullptr)
	{
		node* temp = n;
		n = n->next;
		delete(n);
	}
	s->head = nullptr;
}

bool isEmpty(Stack* s)
{
	if (s->head == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isFull(Stack* s) { return false;  }