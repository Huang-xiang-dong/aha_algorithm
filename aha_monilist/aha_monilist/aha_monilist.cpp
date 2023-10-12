#include<iostream>
using namespace std;
//模拟链表，用数组来模拟链表
int main()
{
	int data[101], right[101];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> data[i];
	}
	int len = n;
	//初始化数组right
	for (int i = 1; i <= n; i++)
	{
		if (i != n)//除了最后一个
		{
			right[i] = i + 1;
		}
		else
		{
			right[i] = 0;//最后一个数，右边没有数
		}
	}
	//直接在data数组的末尾增加一个数
	len++;
	cin >> data[len];
	//从链表的头部开始遍历
	int t = 1;
	while (t != 0)
	{
		if (data[right[t]] > data[len])//如果当前结点下一个结点的值大于待插入数，将数插到中间
		{
			right[len] = right[t];//新插入数的下一个结点标号等于当前结点的下一个结点编号
			right[t] = len;//当前结点的下一个结点编号就是新插入数的编号
			break;//插入跳出循环
			//data[t],data[len],data[right[t]];
		}
		t = right[t];//到下一个去，因为如果不插入data[len]，data[t]的下一个就是data[right[t]]
	}
	//输出链表中所有的数
	t = 1;
	while (t != 0)
	{
		cout << data[t] << " ";
		t = right[t];
	}
	return 0;
}