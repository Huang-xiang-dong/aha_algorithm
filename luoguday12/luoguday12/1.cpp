#include<iostream>
#include<string.h>
using namespace std;
//���ִ������
string str;//����һ����ʼ�ַ���
int q;//q�����������
string insert1;//������ַ���
int start1,how;//������ȡ�ַ����Ŀ�ͷ�Ͷ�ȡ���ٸ��ַ���
int op;//������
int a;//�ڼ����ַ�ǰ����
string str1;//��Ҫ������ַ���
string str2;//��Ҫ���ҵ��ַ���
int main()
{
	cin >> q;
	cin >> str;
	for (int i = 0; i < q; i++)
	{
		cin >> op;
		if (op == 1)//����1
		{
			cin >> insert1;
			str+=insert1;
			cout << str << endl;
		}
		if (op == 2)//����2
		{
			cin >> start1 >> how;
			str = str.substr(start1, how);
			cout << str << endl;
		}
		if (op == 3)//����3
		{
			cin >> a;
			cin >> str1;
			str = str.insert(a, str1);
			cout << str << endl;
		}
		if (op == 4)//����4
		{
			cin >> str2;//��Ҫ���ҵ��ַ���
			if (str.find(str2)<200)//����Ҳ����������һ���ܴ����
			{
				cout << str.find(str2) << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
	}
	return 0;
}