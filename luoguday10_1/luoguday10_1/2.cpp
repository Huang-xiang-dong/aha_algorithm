#include<iostream>
using namespace std;
//��ţ��Ϸ
int main()
{
	long long N;
	int count = 0;//�Ʒ���
	cin >> N;//�������
	while (N != 1)
	{
		if (N % 2 == 1)//���N������
		{
			N = 3 * N + 1;
			count++;
		}
		if (N % 2 == 0)//���N��ż��
		{
			N = N / 2;
			count++;
		}
	}//N=1ʱ������Ϸ������
	cout << count<< endl;
	return 0;
}