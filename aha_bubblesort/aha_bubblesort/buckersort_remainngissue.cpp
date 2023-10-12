#include<iostream>
using namespace std;
struct student
{
	char name[21];
	char  score;
	//或int score;
};//创建一个结构体
int main()
{
	student a[100];
	student s;
	int n;//几名学生
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].name >> a[i].score;//循环读入几名学生的名字和成绩
	}
	//冒泡排序，按分数从高到低
	for (int i = 1; i <= n-1; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			if (a[j].score < a[j + 1].score)
			{
				s = a[j];
				a[j] = a[j + 1];
				a[j + 1] = s;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << a[i].name <<endl;
	}
	return 0;
}