#include<iostream>
using namespace std;
//С������
int a[101];//ȫ�ֱ���
void quicksort(int left, int right)//��������
{
	int tmp;//�ݴ��׼ֵ
	int temp;//�ݴ����
	if (left > right)
	{
		return;
	}
	tmp = a[left];//tmp�д�ľ��ǻ�׼ֵ
	//���������ڱ�
	int i = left;
	int j = right;
	while (i != j)
	{
		//����������
		while (a[j] >= tmp && i < j)
		{
			j--;
		}
		//�ٴ���������
		while (a[i] <= tmp && i < j)
		{
			i++;
		}
		//�����������������е�λ��
		if (i < j)//���ڱ�i���ڱ�jû������ʱ
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	//���ս���׼����λ
	a[left] = a[i];
	a[i] = tmp;
	quicksort(left, i - 1);//�ݹ鴦�����
	quicksort(i + 1,right);//�ݹ鴦���ұ�
}
int main()
{
	/*
	//Ͱ����Ľ�
	//��ȥ�أ��ٴ�С��������
	int n;//��ʾn��ͬѧ�������
	cin >> n;
	int a[1001] = {0};
	int ISBN;//ÿ��ͬѧ�����ISBN�ţ���1-1000֮��
	for (int i = 1; i <= n; i++)
	{
		cin >> ISBN;
		a[ISBN] = 1;//���
	}
	for (int i = 1; i <= 1000; i++)//�ж���1000��Ͱ
	{
		if (a[i] == 1)//��������ISBN��
		{
			cout << i << " ";
		}
	}
	return 0;*/

	/*
	//ð��������������
	//�ȴ�С����������ȥ��
	//ֻҪ�������ʱ��Ԥ���ж�һ�µ�ǰ����� a[i]��ǰ��һ���� a[i-1]�Ƿ���ͬ����
	//����ͬ���ʾ�����֮ǰ�Ѿ�������ˣ������ٴ��������ͬ���ʾ������ǵ�һ�γ��֣�
	//��Ҫ��������
	int a[101];
	int n;
	int tmp;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];//����ISBN��
	}
	//��ʼð������
	for (int i = 1; i <= n - 1; i++)//n��������ֻ��Ҫn-1��
	{
		for (int j = 1; j <= n - i; j++)//���ֻ��Ҫ����n-i��
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	cout << a[1]<<" ";//�����һ����
	for (int i = 2; i <= n; i++)
	{
		if (a[i] != a[i - 1])//�����ǰ������ǵ�һ�γ��������
		{
			cout << a[i]<<" ";
		}
	}
	return 0;
	*/
	//���룺10
	//      20 40 32 67 40 20 89 300 400 15
	//�����15 20 32 40 67 89 300 400
	

	//��������
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	quicksort(1, n);
	cout << a[1] << " ";//�������һ����
	for (int i = 2; i <= n; i++)
	{
		if (a[i] != a[i - 1])//����ǵ�һ�γ���
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}