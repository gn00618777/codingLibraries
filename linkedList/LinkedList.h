#include<iostream>
#include"Node.h"
using namespace std;

template<typename T>
class LinkedList {

	public:
			LinkedList()
			{
				count = 0;
				first = 0;
				last = 0;
			}
			~LinkedList()
			{
				if(first != last)
					delete first;
				delete last;
			}
			int size()
			{
				return count;
			}
			Node<T>* front()
			{
				return first;
			}
			Node<T>* back()
			{
				return last;
			}

			void push_back(T value);
			void erase(T *value);
			void pop_back();
			void pop_front();


	protected:
			int count;
			Node<T>* first;
			Node<T>* last;
		

};
