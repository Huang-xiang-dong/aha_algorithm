#include<iostream>
#include<string.h>
using namespace std;
//ģ����
int cnt;
int main()
{
	bool a[1005][1005];
	int n, m, k;//n����������m���������ģ����
	//����
	memset(a, 0, sizeof(a));
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int tmp;
			cin >> tmp;
			a[tmp][j]=1;//��ʾ��j���˵�tmp�������
			//����    
			/*
			6 3 7
			2 3 4
			2 5 7
			3 5 7
			1 3 5
			5 6 7
			1 2 3
			*/
			/*
			�����ѭ���Ϳ�������18�ξ��У�n*m
			i=6,j=3
			  1  2  3                
			1 2          ����ĳ���˵�i����ɵ�j��ģ���� 
			2 2  1           
			3 1  2  1        
			4       1
			5 1  2  1    
			6    1         
			7       3     
			*/
		}
	}
	//���
	for (int i = 1; i <= k; i++)//��������k��
	{
	    cnt = 0;//ÿ������
		for (int j = 1; j <= m; j++)//m����ģ���������
		{
			if (a[i][j])
			{
				cnt++;
			}//���Ϊ1�����1
		}
		cout << cnt << " ";
	}
	return 0;
}