#include<iostream>
#include<algorithm>
using namespace std;
//Uim�����˽������
int main()
{
	int cnt = 1;//ע��Ϊ1����������123ʱ��Ϊ��һ��˳�򣬶����ǵ�0��
	int N;
	int a[10000];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		char c;
		cin >>c;
		a[i] = c - '0';
	}
	while (prev_permutation(a, a + N))
	{
		cnt++;
	}
	cout << cnt;
	return 0;

}