#include<iostream>
using namespace std;
//DFS�����¸������
int a[10], book[10],n;
void dfs(int step)//step��ʾվ�ڵڼ�������ǰ
{
	if (step == n + 1)//���վ�ڵ�n+1������ǰ�����ʾǰ���n�������Ѿ��ź���
	{
		//���һ������(1-n�ź����е��˿��Ʊ��)
		for (int i = 1; i <= n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		return;//����֮ǰ��һ�������һ�ε���dfs�����ĵط�
	}
	for (int i = 1; i <= n; i++)
	{
		//�ж��˿���i�Ƿ�������
		if (book[i] == 0)//book[i]=0��ʾi���˿���������
		{
			//��ʼ����ʹ���˿���i
			a[step] = i;//��i���˿��Ʒ����step�������С�
			book[i] = 1;//��book[i]��Ϊ1����ʾi���˿����Ѿ���������
			//��step�������Ѿ��ź��˿��ƣ���������Ҫ�ߵ���һ��������ǰ
			dfs(step + 1);//�ݹ�����Լ�
			book[i] = 0;//�ջظոյ���
		}
	}
	return;
}
int total;
void dfspoke(int step)
{
	if (step == 10)//���վ�ڵ�10������ǰ����ʾǰ��9�������Ѿ��ź��˿���
	{
		//�ж��Ƿ������ʽ
		if (a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
		{
			//�������Ҫ�󣬿��н��1������ӡ����
			total++;
			cout << a[1] << a[2] << a[3] << "+" << a[4] << a[5] << a[6] << "=" << a[7] << a[8] << a[9] << endl;
		}
		return;//�������һ��
	}
	for (int i = 1; i <= 9; i++)
	{
		//�ж��˿���i�ڲ�������
		if (book[i] == 0)//book[i]=0��ʾ��������
		{
			a[step] = i;
			book[i] = 1;
			dfspoke(step + 1);
			book[i] = 0;
		}
	}
	return;
}
int main()
{
	cin >> n;
	//dfs(1);//����վ��1�ź���ǰ
	dfspoke(1);
	cout << total / 2;
	return 0;
}