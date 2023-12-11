#ifndef LQUEUE_H
#define LQUEUE_H
#include"Node.h"
template<typename T>
class LQueue
{
	int noOfElements;
	Node<T>* head;
	Node<T>* tail;
	void insertAtHead(T val);
public:
	LQueue();
	~LQueue();
	void enQueue(T inf);
	void print();
	T deQueue();
	int getNoOfElements();
	LQueue(const LQueue<T>& ref);
	LQueue<T>& operator=(const LQueue<T>& ref);
	bool isEmpty();
	T getElementAtFront();
};
#endif;

