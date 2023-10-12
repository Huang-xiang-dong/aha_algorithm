#include<iostream>
using namespace std;
//队列结构体
//用这个新类型定义出的每一个变量可以同时存储一个整型数组和两个整数。
struct queue
{
	int data[100];//队列主体，用来存储内容
	int head;//队首
	int tail;//队尾	
};
int main()
{
	//int q[101] = {0,6,3,1,7,5,8,9,2,4};
	//多写一个0，用来初始化q[0]
	//引入两个整型变量head和tail，head用来记录队列的队首，tail用来记录队列的队尾的下一个位置
	//队首删除一个数的操作就是head++
	//在队尾增加一个数的操作是q[tail]=x;tail++;
	/*
	int head, tail;
	head = 1;
	tail = 10;
	while (head < tail)//当队列不为空时执行循环
	{
		cout << q[head] << " ";
		head++;//打印队首并将队首出队

		//先将新队首的数添加到队尾
		q[tail] = q[head];
		tail++;
		//再将队首出队
		head++;
	}
	*/
	//队列，先进先出
	queue q;
	//初始化队列
	q.head = 1;
	q.tail = 1;
	for (int i = 1; i <= 9; i++)
	{
		//依次向队列插入9个数
		cin >> q.data[i];
		q.tail++;//1+9=10
	}
	while (q.head < q.tail)//队列不为空时执行操作
	{
		//打印队首并将队首出队
		cout << q.data[q.head] << " ";
		q.head++;
		//先将新对首的数添加到队尾
		q.data[q.tail] = q.data[q.head];
		q.tail++;
		//再将队首出队
		q.head++;
	}
	return 0;
}