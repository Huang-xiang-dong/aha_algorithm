#include<iostream>
using namespace std;
//ջ������ȳ���ֻ��Ҫһ��һά�����һ��ָ��ջ���ı���top
int main()
{
	char a[101];
	char s[101];
	int len;
	int next;
	cin >> a;
	len = strlen(a);
	//cout << len;
	int mid = len / 2 - 1;
	int top = 0;//ջ�ĳ�ʼ��
	//��midǰ���ַ�������ջ
	for (int i = 0; i <= mid; i++)
	{
		s[++top] = a[i];
	}
	//�ж��ַ����ĳ�������������ż�������ҳ���Ҫ�ַ���ƥ�����ʼ�±�
	if (len % 2 == 0)
	{
		next = mid + 1;
	}
	else
	{
		next = mid + 2;
	}
	//��ʼƥ��
	//��������������ù����м���ַ���ֻ��Ҫ�м��ַ��������Ƿ�ԳƼ���
	for (int i = next; i <= len - 1; i++)
	{
		if (a[i] != s[top])
		{
			break;
		}
		top--;
	}
	//���top��ֵΪ0����˵��ջ�ڵ������ַ�����һһƥ����
	if (top == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}