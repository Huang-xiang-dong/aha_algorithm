#include<iostream>
#include<iomanip>
using namespace std;
//�����˿ڳ���������
int main()
{
	double x, a, y, b;//�����ܹ�����x����a�꣬���ܹ�����y����b��
	cin >> x >> a >> y >> b;
	//fixed��ʾ����̶���С�����ʾ����ʾ��setprecision��ʾ���С�����Ҫ��ʾ��λ��
	cout << fixed << setprecision(2) << (a * x - b * y) / (a - b) << endl;
	return 0;
}