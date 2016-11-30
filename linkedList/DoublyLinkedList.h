#include "LinkedList.h"

template<typename T>
class DoublyLinkedList : public LinkedList<T>{

	public:

		void push_back(T value)
		{
			Node<T> *node = new Node<T>(value);

			if(LinkedList<T>::count == 0)
				LinkedList<T>::first = node;
			else
			{
				LinkedList<T>::last->next = node;
				node->previous = LinkedList<T>::last;
			}
			LinkedList<T>::last = node;
			LinkedList<T>::count++;
		}
		void pop_front()
		{
			if(LinkedList<T>::count == 0) cout<<"list is empty"<<endl;

			else if(LinkedList<T>::count == 1)
			{
				LinkedList<T>::first = 0;
				LinkedList<T>::last = 0;
				LinkedList<T>::count--;
			}
			else
			{
				Node<T>* node = LinkedList<T>::first->next;
				LinkedList<T>::first->next = 0;
				LinkedList<T>::first = node;
				LinkedList<T>::count--;
			}

		}

		void pop_back()
		{
			if(LinkedList<T>::count == 0) cout<<"list is empty"<<endl;

			else if(LinkedList<T>::count == 1)
			{
				LinkedList<T>::first = 0;
				LinkedList<T>::last = 0;
				LinkedList<T>::count--;
			}
			else
			{
				Node<T>* node = LinkedList<T>::last->previous;
				LinkedList<T>::last->previous = 0;
				LinkedList<T>::last = node;
				LinkedList<T>::count--;
			}
		}
		void erase(Node<T> *n)
		{
			if(n == LinkedList<T>::first)
				pop_front();
			else if(n == LinkedList<T>::last)
				pop_back();
			else
			{
				(n->previous)->next = n->next;
				(n->next)->previous = n->previous;
				n->next = 0;
				n->previous = 0;
				LinkedList<T>::count--;
			}
		}

};
