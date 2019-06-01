// 简单链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
typedef int DATA;
struct SNode
{
	DATA data;
	SNode* pNext;
};
struct SList
{
	int k = 0;
	SNode* n_pHead;
	SList()
	{
		k++;
		n_pHead = NULL;
	}
	~SList()
	{
		cout << "正在发生析构" << " " << k << endl;
	}
	void AddHead(DATA d)
	{
		SNode* p = new SNode;
		p->data = d;
		p->pNext = n_pHead;
		n_pHead = p;
	}
};
int main()
{
	SList list1, list2;
	cout << "请输入一个数据" << endl;
	DATA d;
	cin >> d;
	cout << "请输入存入的链表：（1或2）";
	int i = 0;
	cin >> i;
	if (i == 1)
		list1.AddHead(d);
	if (i == 2)
		list2.AddHead(d);
    std::cout << "Hello World!\n"; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
