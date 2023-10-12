#include<iostream>
using namespace std;
int main()
{
	char a[20][21];//假设这里的地图大小不超过20*20
	int n, m;//表示读入多少行字符，m表示每行有多少列
	int sum;
	int map = 0;
	int x, y;
	int p, q;
	cin >> n >> m;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= m - 1; j++)
		{
			//首先判断这个点是不是平地，是平地才可以被放置炸弹
			if (a[i][j] == '.')
			{
				sum = 0;//sum用来计数(可以消灭的敌人数),所以需要初始化为0
				//将当前坐标i，j复制到两个新变量x，y中，以便向上下左右四个方向分别统计可以消灭的敌人数
				//向上统计可以消灭的敌人数
				x = i; y = j; 
				while (a[x][y] != '#')//判断不是墙，如果不是墙就继续
				{
					//如果当前点是敌人，则进行计数
					if (a[x][y] == 'G');
					{
						sum++;
					}
					x--;//x--的作用是继续向上统计
				}
				//向上统计可以消灭的敌人
				x = i, y = j;
				while (a[x][y] != '#')
				{
					if (a[x][y] == 'G')
					{
						sum++;
					}
					x++;
				}
				//向左统计可以消灭的敌人
				x = i, y = j;
				while (a[x][y] != '#')
				{
					if (a[x][y] == 'G')
					{
						sum++;
					}
					y--;//向左统计
				}
				//向右统计可以消灭的敌人
				x = i, y = j;
				while (a[x][y] != '#')
				{
					if (a[x][y] == 'G')
					{
						sum++;
					}
					y++;
				}
				//更新map的值
				if (sum > map)
				{
					//如果当前点所能消灭的敌人总数大于map，则更新map
					map = sum;
					//并用p和q记录当前点的坐标
					p = i;
					q = j;
				}
			}
		}
	}
	cout << "将炸弹放在" << "(" << p << "," << q << ")" << "处" << "," << "最多可以消灭" << map << "个敌人" << endl;
	return 0;
}