#ifndef NODE_H
#define NODE_H


template<class T>
class Node{
	private:
		Node<T> *next; //指向后面的指针
	public:
		T data;
		Node(const T &data, Node<T> *next=0);//构造函数 
		void insertAfter(Node<T> *p);//在本结构之后插入一个同类型的节点p 
		Node<T> *deleteAfter();//删除本节点的后继节点，并返回其地址 
		Node<T> *nextNode();//获取后继节点的地址 
		const Node<T> *nextNode() const;//获取后继节点的地址 
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
