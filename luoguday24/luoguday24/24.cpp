#include<iostream>
#include<cmath>
using namespace std;
//̽����
int main()
{
	int a[1000][1000];
	int n, m, r;
	cin >> n >> m >> r;
	int x, y;//����
	for (int i = 1; i <=m; i++)
	{
		cin >> x >> y;
		a[x][y] = 1;//���
		for (int j = 1; j <= n; j++)//��n*n������ͼ��ʼö��ÿ����
		{
			for (int k = 1; k <= n; k++)
			{
				double dis = sqrt((x - j) * (x - j) + (y - k) * (y - k));
				if (dis <= r)
				{
					a[j][k] = 1;//���̽���
				}
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == 1)
			{
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}