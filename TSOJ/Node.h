#ifndef NODE_H
#define NODE_H


template<class T>
class Node{
	private:
		Node<T> *next; //ָ������ָ��
	public:
		T data;
		Node(const T &data, Node<T> *next=0);//���캯�� 
		void insertAfter(Node<T> *p);//�ڱ��ṹ֮�����һ��ͬ���͵Ľڵ�p 
		Node<T> *deleteAfter();//ɾ�����ڵ�ĺ�̽ڵ㣬���������ַ 
		Node<T> *nextNode();//��ȡ��̽ڵ�ĵ�ַ 
		const Node<T> *nextNode() const;//��ȡ��̽ڵ�ĵ�ַ 
};

template<class T>
Node<T>::Node(const T &data, Node<T> *next): data(data), next(next){}

template<class T>
Node<T> * Node<T>::nextNode()
{
	return next;
}

template<class T>
const Node<T> * Node<T>::nextNode() const
{
	return next;
}

template<class T>
void Node<T>::insertAfter(Node<T> *p)
{
	p->next = next;
	next = p;
}

template<class T>
Node<T>* Node<T>::deleteAfter()
{
	Node<T>* tempPtr = next;
	if(next == 0)
		return 0;
	next = tempPtr->next;
	return tempPtr;
}

#endif
