#include<iostream>
using namespace std;
int x_1[1000], y_1[1000], x_2[1000], y_2[1000];
int row[1000], col[1000];
int main()
{
	int n, m, sum = 0;
	int finalround;//��󱻺�ը������
	int x, y;
	cin >> n >> m >> x >> y;//n��m������Ǿ���Ĵ�С��x�����ը�˼��Σ�y�������ؼ���
	for (int i = 1; i <= x; i++)
	{
		cin >> x_1[i] >> y_1[i] >> x_2[i] >> y_2[i];//��������x�У�ÿ���ĸ�����x1��y1��x2��y2����ʾ����ը�ľ�������Ͻ����굽���½�����
	}
	for (int i = 1; i <= y; i++)
	{
		cin >> row[i] >> col[i];//��������y�У�ÿ��������������ʾ�ؼ��������
		sum = 0;
		for (int j = 1; j <= x; j++)//�ж�ÿ���ؼ��㱻��ը�Ĵ���
		{
			if (row[i] >= x_1[j] && row[i] <= x_2[j] && col[i] >= y_1[j] && col[i] <= y_2[j])//�ж��Ƿ���������
			{
				sum++;
				finalround = j;
			}
		}
		if (sum > 0)
		{
			cout << "Y" << " " << sum << " " << finalround << endl;//�����3����Y�����Ƿ񱻺�ը���ڶ�������ը�˼��Σ��������������һ�α�ը�ǵڼ���
		}
		else
		{
			cout << "N" << endl;
		}
	}
	return 0;
}