#include<iostream>
using namespace std;
//���
int main()
{
	int k;//��ҷ�������
	cin >> k;
	int money = 1;
	int total=0;//�ܹ�Ǯ
	for (int i = 1; i <= k; i++)
	{
		total += money * money;//1*1+2*2+3*3+...
		money++;
		k -= i;
	}
	cout << total+k*money;//ʣ�������������7���
	return 0;
}