#include<iostream>
#include<algorithm>
using namespace std;
//Bookshelf B
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int N;//��ţ��Ŀ
	int n[100000];
	int B;//��ܸ߶�
	cin >> N >> B;
	for (int i = 1; i <= N; i++)
	{
		cin >> n[i];
	}
	sort(n + 1, n + N+1, greater<int>());//�Ӵ�С����
	int S=0;//��ţ�ĸ߶�
	int num = 0;
	while (S < B)
	{
		S += n[num+1];
		num++;
	}
	cout << num;
	return 0;
}