#include<iostream>
using namespace std;
//ģ��������������ģ������
int main()
{
	int data[101], right[101];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> data[i];
	}
	int len = n;
	//��ʼ������right
	for (int i = 1; i <= n; i++)
	{
		if (i != n)//�������һ��
		{
			right[i] = i + 1;
		}
		else
		{
			right[i] = 0;//���һ�������ұ�û����
		}
	}
	//ֱ����data�����ĩβ����һ����
	len++;
	cin >> data[len];
	//�������ͷ����ʼ����
	int t = 1;
	while (t != 0)
	{
		if (data[right[t]] > data[len])//�����ǰ�����һ������ֵ���ڴ��������������嵽�м�
		{
			right[len] = right[t];//�²���������һ������ŵ��ڵ�ǰ������һ�������
			right[t] = len;//��ǰ������һ������ž����²������ı��
			break;//��������ѭ��
			//data[t],data[len],data[right[t]];
		}
		t = right[t];//����һ��ȥ����Ϊ���������data[len]��data[t]����һ������data[right[t]]
	}
	//������������е���
	t = 1;
	while (t != 0)
	{
		cout << data[t] << " ";
		t = right[t];
	}
	return 0;
}