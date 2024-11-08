#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
	unsigned int* queueData;
	int last;
	unsigned int size;
	
} Queue;

void initQueue(Queue* q, unsigned int size); // function to initalize queue
void cleanQueue(Queue* q); // funtion clean the queue

void enqueue(Queue* q, unsigned int newValue); // funtion to add to queue
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s); // function to check if queue empty
bool isFull(Queue* s); // function to check if queue full

#endif /* QUEUE_H */