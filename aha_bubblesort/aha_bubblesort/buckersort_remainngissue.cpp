#include<iostream>
using namespace std;
struct student
{
	char name[21];
	char  score;
	//��int score;
};//����һ���ṹ��
int main()
{
	student a[100];
	student s;
	int n;//����ѧ��
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].name >> a[i].score;//ѭ�����뼸��ѧ�������ֺͳɼ�
	}
	//ð�����򣬰������Ӹߵ���
	for (int i = 1; i <= n-1; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			if (a[j].score < a[j + 1].score)
			{
				s = a[j];
				a[j] = a[j + 1];
				a[j + 1] = s;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << a[i].name <<endl;
	}
	return 0;
}