#include<iostream>
using namespace std;
//����Ĳ��
long long a[30];
int main()
{
	int n;
	cin >> n;
	if (n % 2 == 1)//���������
	{
		cout << -1;
		return 0;
	}
	a[1] = 1;//����a[1]=1
	for (int i = 2; i <= 29; i++)
	{
		a[i] = a[i - 1] * 2;
	}
	for (int i = 29; i >= 2; i--)
	{
		if (n >= a[i])
		{
			cout << a[i] << " ";
			n -= a[i];
		}
	}
	if (n == 0)
	{
		return 0;
	}
	return 0;

}