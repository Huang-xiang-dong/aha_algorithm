#include<iostream>
using namespace std;
//�ʵ�Ա�����̹���������๤����
int a, b, c, d;
int cnt = 0;//������
int dog(int x)
{
	if (x % (a + b) > 0 && x % (a + b) <= a && x % (c + d) > 0 && x % (c + d) <= c)
	{
		cnt = 2;
		return cnt;
	}
	if ((x % (a + b) > a || x % (a + b) == 0) && (x % (c + d) > c || x % (c + d) == 0))
	{
		cnt = 0;
		return cnt;
	}
	else
	{
		cnt = 1;
		return cnt;
	}
}
int main()
{
	int people[100];
	int p, m, g;

	cin >> a >> b >> c >> d;//һ��������a���ӣ�����b���ӣ���һ��������c���ӣ�����d����
	//cin >> p >> m >> g;//p��ʾ�ʵ�Ա����18�ŷ��ӵ�ʱ�̣�m�������̹���ʱ�̣�g��������������ʱ��
	//��Ȼa+bΪһ��ʱ�����ڣ�Ȼ��c+dΪһ��ʱ������,���%��С��a˵����ʱ�����ڱ���ʱ�̣����ڵ���aС��a+b�����ڰ���ʱ��
	for (int i = 0; i < 3; i++)
	{
		cin >> people[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (dog(people[i]) == 2)
		{
			cout << "both"<<endl;
		}
		if (dog(people[i])== 1)
		{
			cout << "one" << endl;
		}
		if (dog(people[i])== 0)
		{
			cout << "none" << endl;
		}
	}
	return 0;
}