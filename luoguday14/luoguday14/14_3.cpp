#include<iostream>
using namespace std;
//��ӡ�����κ�������
int n;//�����λ������εĹ�ģ
int main()
{
	cin >> n;
	//������
	for (int i = 1; i <= n*n; i++)//��i�У���j�е���ֵΪ(i-1)*n+j
	{
		//С��10������ǰ��Ҫ��0
		if (i < 10)
		{
			cout << "0" << i;
		}
		else
		{
			cout << i;
		}
		if (i % n == 0)//����
		{
			cout << endl;
		}
	}
	//������
	//��Ϊ�������Ǵ�1�ӵ�n�����ݵȲ�����֪����Ϊ(1/2)*n*(n+1)
	cout << endl;
	int ans = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n-1; j >=i; j--)
		{
			cout << "  ";//�����ո���Ϊ��01��02.......
		}
		while (ans<=i*(i+1)/2)//1,3,6,10
		{
			if (ans < 10)
			{
				cout << "0" << ans;
			}
			else
			{
				cout << ans;
			}
			ans++;
		}
		cout << endl;
	}

}