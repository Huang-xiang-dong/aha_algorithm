#include<iostream>
using namespace std;
//Hello,2020
int n, m, p,k;//n��ʾ����������m��ʾѡ������p��ʾ��ȷԤ����
int player[100000001];//ѡ������
int main()
{
	cin >> n >> m >> p;
	for (int i = 1; i <=n; i++)
	{
		cin >> k;
		for (int i = 1; i <=k; i++)
		{
			int num;
			cin >> num;//��������������һ��ѡ�ֱ��
			player[num]++;//ÿ��һ�ʹ����г�����Ԥ�������ѡ��
		}
	}
	int ans = 0;
	for (int i = 1; i <=m; i++)//ÿ��ѡ��ѭ��һ��
	{
		if (player[i] == p)
		{
			ans++;//ѡ�ּ�����
		}
	}
	cout << ans << endl;
	for (int i = 1; i <= m; i++)
	{
		if (player[i]==p)
		{
			cout << i << " ";
		}
	}
	return 0;
}