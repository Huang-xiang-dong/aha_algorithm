#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	//����ת��
	int a;//����
	bool flag = true;
	string b;
	cin >> a >> b;
	int len = b.size();
	for (int i =0; i <len; i++)
	{
		if (b[i] != '0')//���ĳ���ַ���Ϊ0
		{
			if (flag != true)cout << "+";
			cout << b[i] << "*" << a << "^" << len - i - 1;
		}
		flag = false;//�����ֵ������ܹ�ִ������һ����˵��Ҫ
	}
}