// MainOne.cpp: 定义控制台应用程序的入口点。
/*
	函数解决
		
			写一个大小为len的循环
				判断arr_1是否等于arr_2(依次遍历)
				是返回1/否返回0

	问题解意
		
	问题原因
		
*/

#include "stdafx.h"
/*		函数定义	*/
int compare_ingore_case(const char* str1, const char* str2);
char to_uppercase(char ch);


int main()
{
	char arr_1[] = { "hello" };
	char arr_2[] = { "hELLO" };
	int result=compare_ingore_case(arr_1,arr_2);
	if (result != 1)
		printf("这两组数字不相同");
	printf("没问题是相同的");
}
int compare_ingore_case(const char* str1, const char* str2)
{
	char Catch_1[128] = {};
	char Catch_2[128] = {};
	int C_1_len = 0;
	int C_2_len = 0;
	int ErrorCode = 0;
	int Qp = 0;
	//遍历数组arr_1
	for (int i = 0; i < 5; i++)
	{
		char Catch_3 = str1[i];
											//是小写直接写入新数组
		if (Catch_3 >= 'a' && Catch_3 <= 'z')
		{
			Catch_1[i] = str1[i];
			C_1_len++;
		}									//不是则转为小写并写入数组
		else if (Catch_3 >= 'A' && Catch_3 <= 'Z')
		{
			char Catch = to_uppercase(Catch_3);		//大写转小写函数
			Catch_1[i] = Catch;
			C_1_len++;
		}
	}
	//遍历数组arr_2
	for (int i = 0; i < 5; i++)
	{
		char Catch_3 = str2[i];

		if (Catch_3 >= 'a' && Catch_3 <= 'z')
		{
			Catch_2[i] = str2[i];
			C_2_len++;
		}
		else if (Catch_3 >= 'A' && Catch_3 <= 'Z')
		{
			char Catch = to_uppercase(Catch_3);
			Catch_2[i] = Catch;
			C_2_len++;
		}
	}
	/* 判断是否相同 */
	for (int i = 0; i < C_1_len; i++)
	{
		if (Catch_1[i] == Catch_2[i])
		{
			Qp++;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
//大写转小写函数
char to_uppercase(char ch)
{
	char p = ch += 32;
	return p;
}