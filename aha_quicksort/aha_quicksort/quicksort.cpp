#include<iostream>
using namespace std;
//quicksort,������һ������������У����ǿ�����������ߵ�����Ϊ��׼����Ȼ������ߺ����ұ߷ֱ�����һ���ڱ�
//�ұ��ڱ����ȶ����ҵ�һ��С�ڻ�׼��������Ȼ������ڱ���ʼ�����ƶ����ҵ�һ�����ڻ�׼��������Ȼ�������ڱ�����
int a[101],n;//����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ��
void quicksort(int left, int right)
{
	if (left > right)
	{
		return;
	}
	int temp = a[left];//��׼��
	int i = left;
	int j = right;
	while (i != j)
	{
		//����������
		while (a[j] >= temp && i < j)
		{
			j--;
		}
		//����������
		while (a[i] <= temp && i < j)
		{
			i++;
		}
		//����λ��
		if (i < j)//����ڱ�i��jû������
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	//���ս���׼����λ
	//��ʱi�Ѿ�����j��
	a[left] = a[i];
	a[i] = temp;
	quicksort(left, i - 1);//����������ߵ�
	quicksort(i + 1, right);//���������ұߵ�
}
int main()
{
	cin >> n;//Ҫ�����������
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	quicksort(1, n);
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}