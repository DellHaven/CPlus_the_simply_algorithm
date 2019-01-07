// MainOne.cpp: 定义控制台应用程序的入口点。
#include "stdafx.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
#include "stdio.h"
#include "math.h"
/*
	如果两个数组值相等则跳过循环下轮
*/

void save()
{
	//生成25个字母单词
	const char* f_name = "D:/text.txt";
	FILE* fp = fopen(f_name, "wb");

	for (char i = 'a'; i <= 'z'; i++)
	{
		char data[6];
		sprintf(data, "%c", i);
		fwrite(data, 1, strlen(data), fp);
	}
	fclose(fp);
}
void load()
{
	//只读取32个文件字节
	const char* f_name = "D:/text.txt";
	FILE* fp = fopen(f_name, "rb");

	char buffer[128];
	int data = fread(buffer, 1, 32, fp);
	printf("%d", data);
}
void _4Load()
{
	//顺序读取文件所有内容
	const char* f_name = "D:/text.txt";
	FILE* fp = fopen(f_name, "rb");

	char buf[4];
	while (! feof (fp))
	{
		int n = fread(buf, 1, 4, fp);
		printf("一次读取了:%d_bit \n", n);
	}

};
int main()
{
	//save();

	//load();

	_4Load();
	return 0;
}