// MainOne.cpp: 定义控制台应用程序的入口点。
	/*
	@DellHaven(刘学鹏)
	The code is for reference only. 
	Please do not use it in business.
*/
/*
	函数解决
		
	问题解意
		
	问题原因
		
	需求描述
		
*/
#include "stdafx.h"
#include "string.h"
/*		函数定义	*/

struct User
{
	int id;
	char email[32];
	bool gender;
	unsigned int QQ;
};
User users[2];
void input(User* p)
{
	p[0].id = 123;
	strcpy_s(p[0].email, "a@xxx.net");
	p[0].gender = 1;
	p[0].QQ = 12365400078;

	p[1].id = 124;
	strcpy_s(p[1].email, "b@xxx.net");
	p[1].gender = 1;
	p[1].QQ = 12365876478;

	p[2].id = 125;
	strcpy_s(p[2].email, "c@xxx.net");
	p[2].gender = 1;
	p[2].QQ = 1236445478;
}
void output(User* p,int len)
{
	printf("ID: %d,Email: %s,gender: %s,QQ: %d \n", 
		p[len].id, 
		p[len].email, 
		p[len].gender ? "男" : "女", 
		p[len].QQ);
}
void find(User* all, int n, int id)
{
	if (all[n].id == id)
	{
		printf("查找到相关数据 \n");
	}
	else
	{
		printf("无该信息,请重新核实 \n");
	}
}
int main()
{
	User s;
	int len = 2;
	input(users);
	output(users, len);

	User* all = users;	//指向数组
	int n = 1;			//数组中那个数组
	int id = 124;		//查询条件
	find(all, n, id);
	return 0;
}