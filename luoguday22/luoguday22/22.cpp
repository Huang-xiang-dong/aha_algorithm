#include<iostream>
using namespace std;
//The Robot Plow G
int main()
{
	int p[10000][10000];
	int X, Y, I;//X�������εĳ�(��)��Y�������εĿ�(��)��I����ָ��
	cin >> X >> Y >> I;
	int XLL, YLL, XUR, YUR;//(XLL,YLL)�������½ǵ����꣬(XUR,YUR)�������Ͻǵ�����
	for (int i = 1; i <= I; i++)
	{
		cin >> XLL >> YLL >> XUR >> YUR;
		for (int j = XLL; j <=XUR ; j++)//������
		{
			for (int k = YLL; k <= YUR; k++)//���ϵ���
			{
				p[j][k] = 1;//��������Ϊ1
			}
		}
	}
	int cnt = 0;//������
	for (int i = 1; i <= X; i++)
	{
		for (int j = 1; j <= Y; j++)
		{
			if (p[i][j] == 1)
			{
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}