#include<iostream>
using namespace std;
//�Ŵ󾵿���־
//��ԭ����ÿһ���ַ�������zr�У�zc��
//�Ĳ�forѭ��
int r, c, zr, zc;
char a[100][100];
int main()
{
	//����
	cin >> r >> c >> zr >> zc;
	for (int i = 1; i <= r;i++)
	{
		for (int j = 1; j <= c; j++)
		{
			cin >> a[i][j];
		}
	}
	//���
	for (int i = 1; i <= r; i++)//ԭ����
	{
		for (int k = 1; k <= zr; k++)//�Ŵ������
		{
			for (int j = 1; j <= c; j++)//ԭ����
			{
				for (int m = 1; m <= zc; m++)//�Ŵ������
				{
					cout << a[i][j];//�������������ֻ��i��j,��j=1�����ǵ�һ�У�Ȼ��zc=2��˵���������j=1���൱���ǷŴ����������
				}
			}
			cout << endl;//�������Ҫ����
		}
	}
	return 0;
}
