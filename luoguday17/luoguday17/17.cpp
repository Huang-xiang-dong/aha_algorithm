#include<iostream>
using namespace std;
//�����������ǡ���������Ų���ı���Ȧ
//����ж���𰸣����x�����ܴ�k������С
int n;//һ����Ҫ�Ｏ��Ǯ
int k = 1;//һ��ʼ��Ǯ�����ӵ�Ǯ
int a, b = 0;
int main()
{
	cin >> n;
	for (int x = 1; x <= 100; x++)
	{
		for (int k = 1; k <= 100; k++)
		{
			if ((7 * x + 21 * k) * 52==n )//x�����ܴ�k������С
			{
				a = x;
				b = k;
			}
		}
	}
	cout << a << endl;
	cout << b;
	return 0;
}