#include<iostream>
#include<algorithm>
using namespace std;
//������İ���
int a[100000];
int main()
{
	int n;//�������ݵ�����
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);//�ȴ�С��������һ��
	int front = 1;//����Ϊ1
	int t = 0;//ʱ��
	while (front != n + 1)
	{
		int c = a[front] - a[front - 1];//a[0]=0
		if (c == 0)//˵������Ҫ�ﵽ��ͬ¥��
		{
			t += 1;
		}
		else
		{
			t += (c * 6 + 5 + 1);//��һ��¥��6�룬Ȼ����5�룬һ������1��
		}
		front++;//����
	}
	t += a[front-1] * 4;//��Ϊ����front��ӵ�5
	cout << t;
	return 0;
}