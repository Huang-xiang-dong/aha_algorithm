#include<iostream>
#include<cmath>
using namespace std;
//TIMSKO
int main()
{
	int m, n, k;
	int ans=0;
	cin >> m >> n >> k;//Ů��ѡ������������ѡ��������������ȥʵϰ�Ķ�������
	for (int i = 1; i <= k; i++)
	{
		int j = k - i;//����������������
		ans = max(ans, min((m - i) / 2, n - j));
	}
	cout << ans;
	return 0;
}