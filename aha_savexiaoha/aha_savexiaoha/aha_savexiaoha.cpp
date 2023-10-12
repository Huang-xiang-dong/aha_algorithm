#include<iostream>
int n, m, p, q, minstep= 999999999;
int a[51][51], book[51][51];
void dfs(int x, int y, int step)
{
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//�����ߣ������ߣ������ߣ�������
	int tx,ty,k;
	//�ж��ܷ񵽴�С��λ��
	if (x == p && y == q)
	{
		//������Сֵ
		if (step < minstep)
		{
			minstep = step;
		}
		return;
		/*�� (x, y) ����Ŀ��λ�� (p, q) ʱ����ʾ�Ѿ��������յ㣬��ʱ���Ը�����С��������������ǰ������֧��Ȼ��ͨ�� return ������һ��ݹ�*/
	}
	//ö�������߷�
	for (k = 0; k <= 3; k++)
	{
		//������һ���������
		tx = x + next[k][0];
		ty = y + next[k][1];
		//�ж��Ƿ�Խ��
		if (tx<1 || tx>n || ty<1 || ty>m)
		{
			continue;
		}
		//�жϸõ��Ƿ�Ϊ�ϰ�������Ѿ���·��
		if (a[tx][ty] == 0 && book[tx][ty] == 0)
		{
			book[tx][ty] = 1;//���������Ѿ��߹�
			dfs(tx, ty, step + 1);//��ʼ������һ����
			book[tx][ty] = 0;//���������
		}
	}
	return;
}

using namespace std;
int main()
{
	int startx, starty;
	cin >> n >> m;//�����к���
	//�����Թ�
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
		//���������յ�����
	}
	cin >> startx >> starty >> p >> q;
	//����㿪ʼ����
	book[startx][starty] = 1;//�������Ѿ���·����
	//��һ������������x���꣬�ڶ�������������y���꣬�����������ǳ�ʼ����Ϊ0
	dfs(startx, starty, 0);
	//�����̲���
	cout << minstep;
	return 0;
}