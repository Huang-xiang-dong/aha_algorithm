#include<iostream>
using namespace std;
//��Ŀ������ţ����Ϸ

int main()
{
	int flag = 0;//�������ڱ�
	int a[100];
	int k, m, n;//k������ֵ��m�����м������ܣ�n����bossѪ��
	int consume, damage;//consume�������ĵķ���ֵ��damage�����˺�
	cin >> k >> m >> n;
	for (int i = 0; i < m; i++)
	{
		cin >> consume >> damage;
		//���ķ���ֵΪ0���˺�����0�϶�����
		//�˺�С��0�϶�����
		if ((!consume && damage) || (consume && (k / consume) * damage >= n))//��һ������Ƿ���ֵΪ0���˺�ֵ����0�϶����ԣ��ڶ�������Ƿ���ֵ��Ϊ0�������ͷŵļ����˺�����bossѪ��
			//�������ɱ��boss�ļ�����ţ�����ж�����򰴴�С�����˳�����
		{
			cout << i + 1 <<" ";
			flag = 1;
		}
	}
		if (!flag)
		{
			cout << -1;
		}
	return 0;
}
