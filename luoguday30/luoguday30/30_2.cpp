#include<iostream>
using namespace std;
int main()
{
	int k;//����
	cin >> k;
	int total = 0;//�������
	int money = 1;//�����
	int a;//����ļ���ɻ�ý����
	a = money;//��һ��һ�����
	for (int i = 1; i <= k; i++)
	{
		total += money;
		a--;//����һ��//�൱���ý������������
		if (a == 0)
		{
			money++;
			a = money;
		}
	}
	cout << total;
	return 0;
}