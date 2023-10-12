#include<iostream>
using namespace std;
//小哼买书
int a[101];//全局变量
void quicksort(int left, int right)//快速排序
{
	int tmp;//暂存基准值
	int temp;//暂存变量
	if (left > right)
	{
		return;
	}
	tmp = a[left];//tmp中存的就是基准值
	//设置两个哨兵
	int i = left;
	int j = right;
	while (i != j)
	{
		//从右往左找
		while (a[j] >= tmp && i < j)
		{
			j--;
		}
		//再从左往右找
		while (a[i] <= tmp && i < j)
		{
			i++;
		}
		//交换两个数在数组中的位置
		if (i < j)//当哨兵i和哨兵j没有相遇时
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	//最终将基准数归位
	a[left] = a[i];
	a[i] = tmp;
	quicksort(left, i - 1);//递归处理左边
	quicksort(i + 1,right);//递归处理右边
}
int main()
{
	/*
	//桶排序改进
	//先去重，再从小到大排序
	int n;//表示n个同学参与调查
	cin >> n;
	int a[1001] = {0};
	int ISBN;//每个同学读入的ISBN号，在1-1000之间
	for (int i = 1; i <= n; i++)
	{
		cin >> ISBN;
		a[ISBN] = 1;//标记
	}
	for (int i = 1; i <= 1000; i++)//判断这1000个桶
	{
		if (a[i] == 1)//如果有这个ISBN号
		{
			cout << i << " ";
		}
	}
	return 0;*/

	/*
	//冒泡排序或快速排序
	//先从小到大排序，再去重
	//只要在输出的时候，预先判断一下当前这个数 a[i]与前面一个数 a[i-1]是否相同。如
	//果相同则表示这个数之前已经输出过了，不用再次输出；不同则表示这个数是第一次出现，
	//需要输出这个数
	int a[101];
	int n;
	int tmp;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];//输入ISBN号
	}
	//开始冒泡排序
	for (int i = 1; i <= n - 1; i++)//n个数排序，只需要n-1趟
	{
		for (int j = 1; j <= n - i; j++)//最多只需要交换n-i次
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	cout << a[1]<<" ";//输出第一个数
	for (int i = 2; i <= n; i++)
	{
		if (a[i] != a[i - 1])//如果当前这个数是第一次出现则输出
		{
			cout << a[i]<<" ";
		}
	}
	return 0;
	*/
	//输入：10
	//      20 40 32 67 40 20 89 300 400 15
	//输出：15 20 32 40 67 89 300 400
	

	//快速排序
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	quicksort(1, n);
	cout << a[1] << " ";//先输出第一个数
	for (int i = 2; i <= n; i++)
	{
		if (a[i] != a[i - 1])//如果是第一次出现
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}