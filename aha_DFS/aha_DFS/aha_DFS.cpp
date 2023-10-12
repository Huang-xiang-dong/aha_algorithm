#include<iostream>
using namespace std;
//DFS：当下该如何做
int a[10], book[10],n;
void dfs(int step)//step表示站在第几个盒子前
{
	if (step == n + 1)//如果站在第n+1个盒子前，则表示前面的n个盒子已经放好了
	{
		//输出一种排列(1-n号盒子中的扑克牌编号)
		for (int i = 1; i <= n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		return;//返回之前的一步，最近一次调用dfs函数的地方
	}
	for (int i = 1; i <= n; i++)
	{
		//判断扑克牌i是否在手上
		if (book[i] == 0)//book[i]=0表示i号扑克牌在手上
		{
			//开始尝试使用扑克牌i
			a[step] = i;//将i号扑克牌放入第step个盒子中。
			book[i] = 1;//将book[i]设为1，表示i号扑克牌已经不在手上
			//第step个盒子已经放好扑克牌，接下来需要走到下一个盒子面前
			dfs(step + 1);//递归调用自己
			book[i] = 0;//收回刚刚的牌
		}
	}
	return;
}
int total;
void dfspoke(int step)
{
	if (step == 10)//如果站在第10个盒子前，表示前面9个盒子已经放好扑克牌
	{
		//判断是否满足等式
		if (a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
		{
			//如果满足要求，可行解加1，并打印出来
			total++;
			cout << a[1] << a[2] << a[3] << "+" << a[4] << a[5] << a[6] << "=" << a[7] << a[8] << a[9] << endl;
		}
		return;//返回最近一步
	}
	for (int i = 1; i <= 9; i++)
	{
		//判断扑克牌i在不在手上
		if (book[i] == 0)//book[i]=0表示牌在手上
		{
			a[step] = i;
			book[i] = 1;
			dfspoke(step + 1);
			book[i] = 0;
		}
	}
	return;
}
int main()
{
	cin >> n;
	//dfs(1);//首先站在1号盒子前
	dfspoke(1);
	cout << total / 2;
	return 0;
}