template <typename T>
class Node {

	public:
		Node(T v)
		{
			value = v;
			next = 0;
			previous = 0;
			
		}
		~Node()
		{
			if(previous != next)
				previous = 0;

			next = 0;
			
		}

		T value;
		Node<T> *next;
		Node<T> *previous;

};
