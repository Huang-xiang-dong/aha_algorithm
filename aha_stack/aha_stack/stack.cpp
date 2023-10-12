#include<iostream>
using namespace std;
//栈，后进先出，只需要一个一维数组和一个指向栈顶的变量top
int main()
{
	char a[101];
	char s[101];
	int len;
	int next;
	cin >> a;
	len = strlen(a);
	//cout << len;
	int mid = len / 2 - 1;
	int top = 0;//栈的初始化
	//将mid前的字符依次入栈
	for (int i = 0; i <= mid; i++)
	{
		s[++top] = a[i];
	}
	//判断字符串的长度是奇数还是偶数，并找出需要字符串匹配的起始下标
	if (len % 2 == 0)
	{
		next = mid + 1;
	}
	else
	{
		next = mid + 2;
	}
	//开始匹配
	//如果是奇数，不用管最中间的字符，只需要中间字符的两边是否对称即可
	for (int i = next; i <= len - 1; i++)
	{
		if (a[i] != s[top])
		{
			break;
		}
		top--;
	}
	//如果top的值为0，则说明栈内的所有字符都被一一匹配了
	if (top == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}