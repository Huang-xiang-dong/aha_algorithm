#include<iostream>
#include<iomanip>
using namespace std;
//���η���
int n;
int a[15][15] = { 0 };
int x = 1, y = 0;
int k = 1;
int main()
{
	cin >> n;
	while(k<=n*n)
	{
		while (y <n&&!a[x][y+1])//����
		{
			a[x][++y] = k++;//�ȸ�ֵ��++
		}
		while (x < n &&!a[x+1][y])//����
		{
			a[++x][y] = k++;
		}
		while (y >1 &&!a[x][y-1])//����
		{
			a[x][--y] = k++;
		}
		while (x >1 && !a[x-1][y])//����
		{
			a[--x][y] = k++;
		}
	}
	for (int i=1; i <= n; i++)
	{
		for (int j = 1; j <=n; j++)
		{
			cout<<setw(3)<<a[i][j];
		}
		cout << endl;
	}
	return 0;
}