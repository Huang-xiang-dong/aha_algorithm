#include<iostream>
using namespace std;
//有两种操作，出牌就是出队，赢牌就是入队
//而桌子相当于一个栈，每打出一张牌放到桌子上就相当于入栈。有人赢牌时，依次将牌从桌面上拿走，这就相当于出栈。
struct queue
{
	int data[1000];
	int head;//队头
	int tail;//队尾的下一个位置
};
struct stack
{
	int data[10];
	int top;//栈顶
};
queue q1, q2;//q1用来模拟小哼手中的牌，q2用来模拟小哈手中的牌
stack s;//用一个栈变量来模拟桌上的牌

int t;//临时变量
int flag;
int main()
{	//初始化q1和q2为空，因为此时两人手中都还没有牌
	q1.head = 1; q1.tail = 1;
	q2.head = 1; q2.tail = 1;
	int book[10];//开个数组用来记录牌面上已经有的牌
	//初始化栈s为空，最开始的时候桌上也没有牌
	s.top = 0;
	//读入手牌
	//初始化用来标记的数组，用来标记哪些牌已经在桌上
	for (int i = 0; i <= 9; i++)
	{
		book[i] = 0;
	}
	for (int i = 1; i <= 6; i++)
	{
		cin >> q1.data[q1.tail];
		q1.tail++;
	}
	for (int i = 1; i <= 6; i++)
	{
		cin >> q2.data[q2.tail];
		q2.tail++;
	}
	//判断游戏结束，即两人中只要有一个人的牌用完了游戏就结束了
	while (q1.head < q1.tail && q2.head < q2.tail)//当队列不为空的时候执行循环
	{
		//游戏开始
		t = q1.data[q1.head];//小哼先亮出一张牌，我们将这张牌存放在临时变量t中
		//判断小哼当前打出的牌能否赢牌
		if (book[t] == 0)//表明桌上没有牌面为t的牌
		{
			//小哼此轮没有赢牌
			q1.head++;//小哼已经打出一张牌，所以要把打出的牌出队
			s.top++;
			s.data[s.top] = t;//再把打出的牌放到桌上，即入栈
			book[t] = 1;//标记桌上现在已经有牌面为t的牌
		}
		else
		{
			//小哼此轮可以赢牌
			q1.head++;//小哼已经打出一张牌，所以要把打出的牌出队
			q1.data[q1.tail] = t;//紧接着把打出的牌放到手中牌的末尾
			q1.tail++;
			while (s.data[s.top] != t)//把桌上可以赢得牌依次放到手中牌的末尾
			{
				book[s.data[s.top]] = 0;//取消标记
				q1.data[q1.tail] = s.data[s.top];//依次放入队尾
				q1.tail++;
				s.top--;//栈中少了一张牌，所以栈顶要减1
			}
			book[s.data[s.top]] = 0;
			q1.data[q1.tail] = s.data[s.top];
			q1.tail++;
			s.top--;
		}
		if (q1.head == q1.tail)
		{
			break;
		}
		/*在q1出完牌之后没有进行检查，导致可能q1出完牌之后游戏还在进行，
		导致错误：输出的数据和正确数据在手中牌中==有时==会少一张牌，这张牌会出现在桌子上面*/
		t = q2.data[q2.head];//小哈出一张牌
		//判断小哈当前打出的牌是否能赢牌
		if (book[t] == 0)//表明桌上没有牌面为t的牌
		{
			//小哈此轮没有赢牌
			q2.head++;//小哈已经打出一张牌，所以要把打出的牌出队
			s.top++;
			s.data[s.top] = t;//再把打出的牌放到桌上，即入栈
			book[t] = 1;//标记桌上现在已经有牌面为t的牌
		}
		else
		{
			//小哈此轮可以赢牌
			q2.head++;//小哈已经打出一张牌，所以要把打出的牌出队
			q2.data[q2.tail] = t;//紧接着把打出的牌放到手中牌的末尾
			q2.tail++;
			while (s.data[s.top]!=t)//把桌上可以赢得牌依次放到手中牌的末尾
			{
				book[s.data[s.top]] = 0;//取消标记
				q2.data[q2.tail] = s.data[s.top];//依次放入队尾
				q2.tail++;
				s.top--;
			}
			//把那张和打出的牌相同的牌取走
			book[s.data[s.top]] = 0;
			q2.data[q2.tail] = s.data[s.top];
			q2.tail++;;
			s.top--;
		}
	}
	if (q2.head == q2.tail)
	{
		cout << "小哼win" << endl;
		cout << "小哼当前手中的牌是" << endl;
		for (int i = q1.head; i <= q1.tail - 1; i++)
		{
			cout << q1.data[i] << " ";
		}
		cout << endl;
		if (s.top > 0)//如果桌上有牌则依次输出桌上的牌
		{
			cout << "桌上的牌是" << endl;
			for (int i = 1; i < s.top; i++)
			{
				cout << s.data[s.top] << " ";
			}
		}
		else
		{
			cout << "桌上已经没有牌了" << endl;
		}
	}
	else
	{
		cout << "小哈win" << endl;
		cout << "小哈手中的牌是:" << endl;
		for (int i = q2.head; i <= q2.tail - 1; i++)
		{
			cout << q2.data[i] << " ";
		}
		cout << endl;
		if (s.top > 0)//如果桌上有牌则依次输出桌上的牌
		{
			cout << "桌上的牌是:" << endl;
			for (int i = 1; i <= s.top; i++)
			{
				cout << s.data[i] << " ";
			}
		}
		else
		{
			cout << "桌上已经没有牌了" << endl;
		}
	}
	return 0;
}
//接下来判断小哼当前打出的牌能否赢得桌上的牌，也就是判断桌上的牌与t有没有相同的
//枚举桌子上每一张牌与t进行比对
/*for (int i = 1; i <= s.top; i++)
{
	if (t == s.data[i])
	{
		flag = 1;
		break;
	}
}
//如果flag为0，就表示小哼没能赢得桌上的牌，将打出的牌留在桌上
if (flag == 0)
{
	//小哼此轮没有赢牌
	q1.head++;//小哼已经打出一张牌，所以要把打出的牌出队
	s.top++;
	s.data[s.top] = t;//再把打出的牌放到桌上，即入栈
}
//如果flag=1就表明小哼可以赢得桌上的牌，需要将赢得手牌依次放入小哼的手中
if (flag == 1)
{
	//小哼此轮可以赢牌
	q1.head++;//小哼此时已经打出一张牌，所以要把打出的牌出队
	q1.data[q1.tail] = t;//因为此轮可以赢牌，所以紧接着把刚才打出的牌又放到手中牌的末尾
	q1.tail++;
	while (s.data[s.top] != t)//把桌上可以赢得牌(从当前桌面最顶部的一张牌开始取，直到取到与打出的牌相同为止)依次放到手中牌的末尾
	{
		q1.data[q1.tail] = s.data[s.top];//依次放入队尾
		q1.tail++;
		s.top--;//栈中少了一张牌，栈顶减1
	}
}*/
