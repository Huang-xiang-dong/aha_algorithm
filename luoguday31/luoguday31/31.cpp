#include<iostream>
using namespace std;
int main()
{
	long long a1;//��һ��
	long long a2;//�ڶ���
	long long n;//����
	cin >> a1 >> a2>>n;
	long long d = a2 - a1;//�Ȳ�
	long long total=0;//����
	long long num[1000] = { 0 };
	//��ֵ
	for (int i = 1; i <= n; i++)
	{
		num[i] = a1 + (i - 1) * d;
		total += num[i];
	}
	cout << total;
	return 0;
}