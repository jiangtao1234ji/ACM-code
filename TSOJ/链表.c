#include<stdio.h>
#include<stdlib.h>
struct Node
{
	char name [20];
	long num;
	char sex;
	struct Node *next;
};
struct Node * create(struct Node *);
struct Node * insert(struct Node *head, struct Node * node);
struct Node * delete_node(struct Node * head, long num);
int main()
{
	struct Node * head = NULL, *p;
	head = create(head);
	if(head == NULL)
	{
		printf("建立链表错误！\n");
		exit(0);
	}
	p = head;
	while(p->next)
	{
		printf("%10s %10ld\n", p -> name, p -> num);
		p = p->next;
	}
	return 0;
}
//创建一个链表 
struct Node * create(struct Node * head)
{
	struct Node * newnode;
	struct Node * q;
	newnode = (struct Node *)malloc(sizeof(struct Node));
	scanf("%s %ld", newnode -> name, &newnode -> num);
	head = q = newnode;
	while( newnode -> num > 0 )
	{
		newnode = (struct Node *)malloc(sizeof(struct Node));
		scanf("%s %ld", newnode -> name, &newnode -> num);
		q -> next = newnode;
		q = q-> next;
	}
	q -> next = NULL;
	return head;
}
//插入一个数 
struct Node * insert(struct Node *head, struct Node * node)
{
	struct Node * p = head;
	struct Node * prep = p;
	if(head == NULL || node == NULL)
	{
		return head;
	}
	while( p -> next != NULL)
	{
		if(p -> num < node -> num)
		{
			prep = p;
			p = p-> next;
		}
		else if ( p -> num == node -> num)
		{
			printf("%s already exist!\n", node -> name);
			return head;
		}
		else
			break;
	}
	if(head == p)
	{
		node -> next = p;
		head = node;
	}
	else
	{
		node -> next = prep -> next;
		prep -> next = node;
	}
	return head;
}
//删除一个数 
struct Node * delete_node(struct Node * head, long num)
{
	struct Node *p = head;
	struct Node *prep = p;
	if(head == NULL)
		return head;
	while( p!= NULL)
	{
		if( p -> num != num)
		{
			prep = p;
			p = p -> next;
		}
		else break;
	}
	if( head == p)
		head = p -> next;
	else if ( p -> next != NULL)
		prep -> next = p -> next;
	else 
		prep -> next = NULL;
	if( p == NULL)
		printf("Not exist!\n");
	else
		free(p);
	return head;
}
