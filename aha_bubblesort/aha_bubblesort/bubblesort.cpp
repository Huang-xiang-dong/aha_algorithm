#include<iostream>
using namespace std;
//冒泡排序的基本思想是：每次比较两个相邻的元素，如果它们的顺序徐错误就把它们交换过来。
//总结一下：如果有n个数进行排序，只需将n-1个数归位，也就是说要进行n-1趟操作。而每一趟都需要从第1位开始景行行相邻两个数的比较。
int main()
{
	int a[100];
	int n;
	int tmp;//暂存值
	cin >> n;//表示接下来有多少个数
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	//Core
	for (int i = 1; i <= n - 1; i++)//n个数排序，只需要用n-1趟
	{
		for (int j = 1; j <= n - i; j++)//从第1位开始比较直到最后一个尚未归位的数。这里是从比较n-1，n-2，...次
		{
			if (a[j] < a[j + 1])//比较大小并交换
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
//时间复杂度是双重for循环，为O(N^2);