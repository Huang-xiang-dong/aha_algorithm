#include<iostream>
#include<cmath>
using namespace std;
//����൱�Ķ���
int a[1010][5];
int sum[1010];
int N;
int cnt=0;//������
int main()
{
	
	cin >> N;//N��ʾ����ͬѧ
	for (int i = 1; i <= N; i++)
	{
		cin >> a[i][1]>>a[i][2]>>a[i][3];//����ÿ��ͬѧ�����ġ���ѧ��Ӣ��ɼ�
		sum[i] = a[i][1]+a[i][2]+a[i][3];//ͬѧ���гɼ��ܺ�
	}
	//������ͬѧ�Ƚ�
	for (int i = 1; i <= N; i++)
	{
		for (int j = i + 1; j <= N; j++)
		{
			if (abs(a[i][1] - a[j][1]) <= 5 && abs(a[i][2] - a[j][2]) <= 5 && abs(a[i][3] - a[j][3] <= 5) && abs(sum[i] - sum[j]) <= 10)
			{
				cnt++;
			}
		}
	}
	cout << cnt<<endl;
	return 0;
}