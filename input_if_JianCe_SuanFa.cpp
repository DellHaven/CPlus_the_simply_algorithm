// MainOne.cpp: 定义控制台应用程序的入口点。
	/*
	@DellHaven(刘学鹏)
	The code is for reference only. 
	Please do not use it in business.
*/
#include "stdafx.h"
#include "string.h"
#include "stdlib.h"

int main()
{	
	/*
		代码功能
			检测输入
			输入1，jan，january，输出输入正确
			反之
			不正确
	*/

	char buffer[128];
	printf("你的生日月份是:");
	gets_s(buffer);
	if (strcmp(buffer, "1") == 0 || strcmp(buffer, "jan") == 0 || strcmp(buffer, "january") == 0)
	{
		printf("您输入正确");
	}
	else
	{
		printf("您输入不正确");
	}
	return 0;
}