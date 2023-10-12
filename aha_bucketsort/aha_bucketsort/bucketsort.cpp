#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	/*
	int a[100];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	sort(a, a + 5,cmp);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
	*/
	/*int a[11];
	int t;
	for (int i = 0; i < 11; i++)
	{
		a[i] = 0;
	}
	for (int i = 1; i <= 5; i++)
	{
		cin >> t;
		a[t]++;
	}
	for (int i = 10; i>=0; i--)//从a[0]--a[11]
	{
		for (int j = 1; j <= a[i]; j++)//出现了几次就打印几次
		{
			cout << i<<" ";
		}
	}
	getchar();//getchar()读取字符的函数
	return 0;*/
	int book[1001];
	for (int i = 0; i <= 1000; i++)
	{
		book[i] = 0;
	}
	//桶排序
	int n;
	int t;
	cin >> n;//输入一个数，表示接下来有几个数进行排序
	for (int i = 1; i <= n; i++)
	{
		cin >> t;
		book[t]++;
	}
	for (int i = 1000; i >= 0; i--)//从book[1000]--book[0]
	{
		for (int j = 1; j <= book[i]; j++)
		{
			cout << i << " ";
		}
	}
	return 0;
	//自己的理解：数组就相当于是桶，然后待排序的数就相当于是一张小旗子，然后如果和桶的编号相对应就把旗子插入相对应的桶中。
	//时间复杂度：由上述代码知，44行的for循环循环了m次，m为桶的个数，52行的for循环循环了n次，n为待排序的个数，57行的for循环又循环了m+n次，所以一共时间复杂度为O(2*(m+n))化简为O(m+n),其实感觉还是一个很快的算法，但是也很简单。--2023年8月14日
}