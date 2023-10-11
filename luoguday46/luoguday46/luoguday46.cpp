#include<iostream>
using namespace std;
const int MAX = 100005;
struct Ticket
{
	//��Ʊ�ļ۸�����ʹ��ʱ����Ƿ�ʹ�ù�
	int price;
	int time;
	int used;
}q[MAX];
int head, tail, n, cost;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int op, price, time;
		cin >> op >> price >> time;
		if (op == 0)//�������������ֱ�ӰѼ۸�ӵ�cost����
		{
			cost += price;
			//��һ���µ���Ʊ���뵽����ĩβ������Ʊ������ʹ��ʱ���ǵ�ǰʱ��+45
			q[tail].time = time + 45;
			//��Ʊ�����ǵ���Ʊ��
			q[tail++].price = price;
		}
		else
		{
			//����һ��ѭ���ѹ���Ʊ�ӵ�
			while (head < tail && q[head].time < time)//С�ڵ�ǰʱ��
			{
				head++;
			}
			bool found = false;//����û�к��ʵ���Ʊ
			for (int j = head; j < tail; j++)
			{
				//ѭ������ʣ���Ʊ����Щһ��û���ڣ���Ϊ��Ŀ�ǰ�ʱ��˳������ǵ�
				if (q[j].price >= price && q[j].used ==0)
				{
					//����۸���ʣ�������ЩƱû�ù�������ҵ�
					found = true;
					q[j].used = 1;
					break;
				}
			}
			//���û�ҵ�����ֻ����Ʊ��
			if (!found) cost += price;
		}
	}
	cout << cost;
	return 0;
}