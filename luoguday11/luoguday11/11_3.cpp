#include<iostream>
#include<algorithm>
using namespace std;
//Ѱ����Сֵ
int main()
{
	int n;//������������ָ���
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int min = a[0];//����һ��ʼ��С����a[0]
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << min << endl;
	return 0;
}