#include<iostream>
using namespace std;
//quicksort,假如有一串待排序的序列，我们可以先以最左边的数作为基准数，然后最左边和最右边分别设置一个哨兵
//右边哨兵最先动，找到一个小于基准数的数，然后左边哨兵开始向右移动，找到一个大于基准数的数，然后两个哨兵交换
int a[101],n;//定义全局变量，这两个变量需要在子函数中使用
void quicksort(int left, int right)
{
	if (left > right)
	{
		return;
	}
	int temp = a[left];//基准数
	int i = left;
	int j = right;
	while (i != j)
	{
		//从右往左找
		while (a[j] >= temp && i < j)
		{
			j--;
		}
		//从左往右找
		while (a[i] <= temp && i < j)
		{
			i++;
		}
		//交换位置
		if (i < j)//如果哨兵i和j没有相遇
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	//最终将基准数归位
	//此时i已经等于j了
	a[left] = a[i];
	a[i] = temp;
	quicksort(left, i - 1);//继续处理左边的
	quicksort(i + 1, right);//继续处理右边的
}
int main()
{
	cin >> n;//要排序的数个数
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	quicksort(1, n);
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}