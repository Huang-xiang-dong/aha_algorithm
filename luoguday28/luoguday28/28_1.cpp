#include<iostream>
using namespace std;
//�����������
int main()
{
	//Ͱ����
	int temp;
	int cnt=0;//������
	int N;//���ɵ����������
	cin >> N;
	int a[1002] = { 0 };//ע��һ��ʼͰ����һ��ҪΪ0
	for (int i = 1; i <= N; i++)
	{
		cin >> temp;
		if (a[temp])
		{
			continue;//������ֹ��ˣ��������һ��ѭ��
		}
		a[temp]++;
		cnt++;
	}
	cout << cnt << endl;
	for (int i = 1; i <=1000 ; i++)
	{
		/*for (int j = 1; j <= a[i]; j++)
		{
			cout << i << " ";
		}*/
		if (a[i])
		{
			cout << i <<" ";
		}
	}
	cout << endl;
	return 0;
}