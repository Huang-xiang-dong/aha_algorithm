#include<iostream>
using namespace std;
//���ӳ���
int n;//n��ʾ����
int peach = 1;//���һ��ʣ��һ������
int main()
{
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		peach = (peach + 1) * 2;
	}
	cout << peach;
	return 0;
}