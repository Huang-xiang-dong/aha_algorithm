#include<iostream>
#include<iomanip>
using namespace std;
//�ն����ĳ��⳵����ѧ
double R;
#define Pi 3.14159265358979323846
int main()
{
	cin >> R;//����뾶
	cout <<fixed<<setprecision(5)<<Pi*(R*R)<<endl;
	cout <<fixed<<setprecision(5)<< 2 * R * R;
	return 0;
}
