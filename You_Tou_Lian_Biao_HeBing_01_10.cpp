// MainOne.cpp: 定义控制台应用程序的入口点。
	/*
	@DellHaven(刘学鹏)
	The code is for reference only. 
	Please do not use it in business.
*/
#include "stdafx.h"
#include "string.h"
#include "stdlib.h"
/*
函数解决
	接收用户输入
	判断是否输入了add
		提示用户输入数据
			保存到链表中
问题解意

问题原因

需求描述

*/

//定义一个结构体
/*
	内容为一个int的型id
*/
struct Node
{
	int data;
	Node* next;
};
Node Head = { 0 };
Node Head_2 = { 0 };

void add(Node* p)		//01末尾插入法_2
{
	p->next = Head.next;
	Head.next = p;
}		
void add_1(Node* p)		//10插入法(尾尾插入方法)_1
{
	Node* _p = &Head;
	while (_p->next)
	{
		_p = _p->next;
	}
	_p->next = p;
	p->next = 0;
}   
void add_2(Node* p)
{
	p->next = Head_2.next;
	Head_2.next = p;
}
Node* Merge(Node* lst1, Node* lst2)	//将链表二<-链表一(合并操作)
{
	while (lst1->next)
	{
		lst1 = lst1->next;
	}
	lst1->next = Head_2.next;
	return lst1;
}
int main()
{
	Node* a_1 = (Node*)malloc(sizeof(Node));
	a_1->data = 1;
	add_1(a_1);

	Node* a_2 = (Node*)malloc(sizeof(Node));
	a_2->data = 2;
	add_1(a_2);

	Node* a_3 = (Node*)malloc(sizeof(Node));
	a_3->data = 3;
	add_1(a_3);

	Node* a_4 = (Node*)malloc(sizeof(Node));
	a_4->data = 4;
	add_1(a_4);
	/****************************************************/
	Node* a_2_1 = (Node*)malloc(sizeof(Node));
	a_2_1->data = 9;
	add_2(a_2_1);

	Node* a_2_2 = (Node*)malloc(sizeof(Node));
	a_2_2->data = 8;
	add_2(a_2_2);

	Node* a_2_3 = (Node*)malloc(sizeof(Node));
	a_2_3->data = 7;
	add_2(a_2_3);

	Node* a_2_4 = (Node*)malloc(sizeof(Node));
	a_2_4->data = 6;
	add_2(a_2_4);

	Merge(&Head, &Head_2);
	return 0;
}