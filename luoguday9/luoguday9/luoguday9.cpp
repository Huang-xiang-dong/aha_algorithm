#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
//��ϸ������
int main()
{
	int n;
	double a[300];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);//Ĭ������ıȽ�������
	double jas = 0;//������
	for (int i = 1; i < n - 1; i++)//��ΪҪ����ֵ������������ֵ��С������ȥ������Ϊǰ�����������ֻҪ�ѵ�0�������һ��ȥ������
	{
		jas += a[i];//ȥ�������ֵ����Сֵ����ܺ�
	}
	cout << fixed << setprecision(2) << jas / (n - 2) << " " << max(fabs(a[1] - jas / (n - 2)), fabs(a[n - 2] - jas / (n - 2)));//��Ϊ�Ѿ��ź�˳���ˣ����Ծ���ֵ���ֵ���ǿ�ͷ����ĩβ��
	return 0;
}