#include<iostream>
#include<string.h>
using namespace std;
//umi�����غ���
int main()
{
	int n;//n�����ַ�������
	string x,y;//x��y���������ַ���
	cin >> n;
	cin >> x;
	cin >> y;
	//��һ���ַ���zʹ�����f(x,z)=y����֪x��y����z��y��ÿһ���ַ�����x��zС
	//���y����һ���ַ���x��z�󣬾�һ���Ҳ����⣬ֱ�����-1������
	//���y��ÿ���ַ�����x��zС����ôy�Ϳ���������z��
	for (int i = 0; i < n; i++)
	{
		if (y[i] > x[i])
		{
			cout << -1 << endl;
			return 0;
		}
	}
	cout << y << endl;//yҲ��z��һ������
	return 0;
}