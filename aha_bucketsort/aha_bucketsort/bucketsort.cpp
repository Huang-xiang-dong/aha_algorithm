#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	/*
	int a[100];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	sort(a, a + 5,cmp);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
	*/
	/*int a[11];
	int t;
	for (int i = 0; i < 11; i++)
	{
		a[i] = 0;
	}
	for (int i = 1; i <= 5; i++)
	{
		cin >> t;
		a[t]++;
	}
	for (int i = 10; i>=0; i--)//��a[0]--a[11]
	{
		for (int j = 1; j <= a[i]; j++)//�����˼��ξʹ�ӡ����
		{
			cout << i<<" ";
		}
	}
	getchar();//getchar()��ȡ�ַ��ĺ���
	return 0;*/
	int book[1001];
	for (int i = 0; i <= 1000; i++)
	{
		book[i] = 0;
	}
	//Ͱ����
	int n;
	int t;
	cin >> n;//����һ��������ʾ�������м�������������
	for (int i = 1; i <= n; i++)
	{
		cin >> t;
		book[t]++;
	}
	for (int i = 1000; i >= 0; i--)//��book[1000]--book[0]
	{
		for (int j = 1; j <= book[i]; j++)
		{
			cout << i << " ";
		}
	}
	return 0;
	//�Լ�����⣺������൱����Ͱ��Ȼ�������������൱����һ��С���ӣ�Ȼ�������Ͱ�ı�����Ӧ�Ͱ����Ӳ������Ӧ��Ͱ�С�
	//ʱ�临�Ӷȣ�����������֪��44�е�forѭ��ѭ����m�Σ�mΪͰ�ĸ�����52�е�forѭ��ѭ����n�Σ�nΪ������ĸ�����57�е�forѭ����ѭ����m+n�Σ�����һ��ʱ�临�Ӷ�ΪO(2*(m+n))����ΪO(m+n),��ʵ�о�����һ���ܿ���㷨������Ҳ�ܼ򵥡�--2023��8��14��
}