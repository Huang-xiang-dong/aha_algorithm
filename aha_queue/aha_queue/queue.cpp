#include<iostream>
using namespace std;
//���нṹ��
//����������Ͷ������ÿһ����������ͬʱ�洢һ���������������������
struct queue
{
	int data[100];//�������壬�����洢����
	int head;//����
	int tail;//��β	
};
int main()
{
	//int q[101] = {0,6,3,1,7,5,8,9,2,4};
	//��дһ��0��������ʼ��q[0]
	//�����������ͱ���head��tail��head������¼���еĶ��ף�tail������¼���еĶ�β����һ��λ��
	//����ɾ��һ�����Ĳ�������head++
	//�ڶ�β����һ�����Ĳ�����q[tail]=x;tail++;
	/*
	int head, tail;
	head = 1;
	tail = 10;
	while (head < tail)//�����в�Ϊ��ʱִ��ѭ��
	{
		cout << q[head] << " ";
		head++;//��ӡ���ײ������׳���

		//�Ƚ��¶��׵�����ӵ���β
		q[tail] = q[head];
		tail++;
		//�ٽ����׳���
		head++;
	}
	*/
	//���У��Ƚ��ȳ�
	queue q;
	//��ʼ������
	q.head = 1;
	q.tail = 1;
	for (int i = 1; i <= 9; i++)
	{
		//��������в���9����
		cin >> q.data[i];
		q.tail++;//1+9=10
	}
	while (q.head < q.tail)//���в�Ϊ��ʱִ�в���
	{
		//��ӡ���ײ������׳���
		cout << q.data[q.head] << " ";
		q.head++;
		//�Ƚ��¶��׵�����ӵ���β
		q.data[q.tail] = q.data[q.head];
		q.tail++;
		//�ٽ����׳���
		q.head++;
	}
	return 0;
}