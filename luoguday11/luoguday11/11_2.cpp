#include<iostream>
#include<iomanip>
using namespace std;
//�ٷַ�լˮ
int main()
{
	double t;
	int n;//t�����ж��ٺ�����լ����ˮ��n����Ҫ�ָ�����ͬѧ
	cin >> t>>n;
	cout << fixed << setprecision(3) << t / n << endl << 2 * n << endl;
	return 0;
}