#include<iostream>
using namespace std;
//���μǹ�˾
int main()
{
	long long a, b, c, d, e, f;
	int n;//�˽�ÿ��͵������
	char m;//��������:��
	cin >> a >> m >> b >> m >> c;
	cin >> d >> m >> e >> m >> f;
	cin >> n;
	long long hour = d - a;//Сʱ��
	long long minute = e - b;//������
	long long second = f - c;//����
	long long sum = n * (3600 * hour + 60 * minute + second);
	cout << sum;
	return 0;
}