#include<iostream>
int n, m, p, q, minstep= 999999999;
int a[51][51], book[51][51];
void dfs(int x, int y, int step)
{
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//向右走，向下走，向左走，向上走
	int tx,ty,k;
	//判断能否到达小哈位置
	if (x == p && y == q)
	{
		//更新最小值
		if (step < minstep)
		{
			minstep = step;
		}
		return;
		/*当 (x, y) 等于目标位置 (p, q) 时，表示已经到达了终点，此时可以更新最小步数，并结束当前搜索分支，然后通过 return 返回上一层递归*/
	}
	//枚举四种走法
	for (k = 0; k <= 3; k++)
	{
		//计算下一个点的坐标
		tx = x + next[k][0];
		ty = y + next[k][1];
		//判断是否越界
		if (tx<1 || tx>n || ty<1 || ty>m)
		{
			continue;
		}
		//判断该点是否为障碍物或者已经在路中
		if (a[tx][ty] == 0 && book[tx][ty] == 0)
		{
			book[tx][ty] = 1;//标记这个点已经走过
			dfs(tx, ty, step + 1);//开始尝试下一个点
			book[tx][ty] = 0;//返还这个点
		}
	}
	return;
}

using namespace std;
int main()
{
	int startx, starty;
	cin >> n >> m;//读入行和列
	//读入迷宫
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
		//读入起点和终点坐标
	}
	cin >> startx >> starty >> p >> q;
	//从起点开始搜索
	book[startx][starty] = 1;//标记起点已经在路径中
	//第一个参数是起点的x坐标，第二个参数是起点的y坐标，第三个参数是初始步数为0
	dfs(startx, starty, 0);
	//输出最短步数
	cout << minstep;
	return 0;
}