#include "LQueue.h"
template<typename T>
LQueue<T>::LQueue()
{
	noOfElements = 0;
	head = nullptr;
	tail = nullptr;
}
template<typename T>
LQueue<T>::~LQueue()
{
	if (head)
	{
		Node<T>* previous = head;
		Node<T>* temp = head->next;
		while (temp != nullptr)
		{
			delete previous;
			previous = temp;
			temp = temp->next;
		}
		delete previous;
		head = nullptr;
	}
}
template<typename T>
void LQueue<T>::enQueue(T inf)
{
	if (tail == nullptr)
	{
		this->insertAtHead(inf);
		noOfElements++;
		tail = head;
		return;
	}
	tail->next = new Node<T>(inf);  
	tail = tail->next;
	noOfElements++;
}
template <typename T>
void LQueue<T>::insertAtHead(T val)
{
	Node<T>* temp = nullptr;
	temp = head;
	head = new Node<T>(val);
	head->next = temp;
}
template <typename T>
void LQueue<T>::print()
{
	Node<T>* temp = head;
	while (temp != nullptr)
	{
		cout << temp->info << " ";
		temp = temp->next;
	}
	cout << endl;
}
template <typename T>
T LQueue<T>::deQueue()
{
	if (!head)
	{
		exit(0);
	}
	Node<T>* obj = head;
	T temp = head->info;
	head = head->next;
	delete obj;
	noOfElements--;
	return temp;
}
template <typename T>
int LQueue<T>::getNoOfElements()
{
	return noOfElements;
}
template <typename T>
LQueue<T>::LQueue(const LQueue<T>& ref):LQueue()
{
	if (!ref.head)
	{
		return;
	}
	*this = ref;
}
template <typename T>
LQueue<T>& LQueue<T>::operator=(const LQueue<T>& ref)
{
	if (this == &ref)
	{
		return *this;
	}
	this->~LQueue();
	if (ref.head == nullptr)
	{
		return *this;
	}
	Node<T>* cpy = ref.head;
	head = new Node<T>(cpy->info);
	cpy = cpy->next;
	Node<T>* temp = head;
	while (cpy != nullptr)
	{
		temp->next = new Node<T>(cpy->info);
		temp = temp->next;
		tail = temp;
		cpy = cpy->next;
	}
	noOfElements = ref.noOfElements;
	return *this;
}
template <typename T>
bool LQueue<T>::isEmpty()
{
	if (noOfElements == 0)
	{
		return true;
	}
	return false;
}
template <typename T>
T LQueue<T>::getElementAtFront()
{
	return tail->info;
}