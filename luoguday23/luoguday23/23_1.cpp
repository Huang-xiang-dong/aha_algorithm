#include<iostream>
#include<algorithm>
using namespace std;
//Uim�����˽�����-��һ
int N;
int a[10000];
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];//ԭ������
	}
	if (prev_permutation(a, a + N))
	{
		for (int i = 0; i < N; i++)
		{
			cout << a[i]<<" ";
		}
	}
	return 0;
}