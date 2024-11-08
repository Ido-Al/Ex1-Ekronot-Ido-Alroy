#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	q->queueData = new unsigned int[size];
	q->last = -1;
	q->size = size;
}
void cleanQueue(Queue* q)
{
	for (int i = q->last; i > -1; i--)
	{
		q->queueData[i] = 0;
	}
	q->last = -1;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->last += 1;
		q->queueData[q->last] = newValue;
	}
	else
	{
		std::cout << "Queue is full can not add another element\n";
	}
}
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	if (!isEmpty(q))
	{
		int temp = q->queueData[0];
		for (int i = 0; i < q->last; i++)
		{
			q->queueData[i] = q->queueData[i + 1];
		}
		q->last--;
		return temp;
	}
}

bool isEmpty(Queue* s)
{
	return s->last == -1;
}
bool isFull(Queue* s)
{
	return s->size - 1 == s->last;
}