#include<iostream>
using namespace std;
//����չʾ
int x, y;//����
int counter=0;//������
int years[100];//�����洢���������
bool ifyears(int year)//�ж��ǲ�������
{
	if (year % 4 == 0 && year % 100 != 0)//�ܱ�4���������ܱ�100����
	{
		return true;
	}
	else if (year % 400 == 0)//�ܱ�400����
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	cin >> x >> y;
	for (int i = x; i <= y; i++)
	{
		if (ifyears(i))
		{
			years[counter++] = i;
		}
	}
	cout << counter << endl;
	for (int i = 0; i < counter; i++)
	{
		cout << years[i] << " ";
	}
	return 0;
}