#include<iostream>
using namespace std;
//���е�ͳ��
int a[100];//ȫ�ֱ��������ʼ��Ϊ0�����д��������Ǿֲ�������Ҫ��ʼ��Ϊ0������ᱨ��
int main()
{
	int M, N;
	cin >> M >> N;
	for (int i = M; i <= N; i++)	
	{

		int tmp = i;
		while (tmp > 0)
		{
			a[tmp % 10] ++ ;
			tmp /= 10;
		}

	}
	//���
	for (int i = 0; i <= 9; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
 }