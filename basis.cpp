#include<iostream>
using namespace std;

//1.#define 宏常量（通常在文件上方定义）
#define day 7
int main()
{   //常量定义使用#define以及const

	//2.const修饰变量
	const int a = 14;
	cout << "一周有 "<< day << "天" <<"一月有"<< a << "天"<< endl;
	system("pause");
	return 0;
}
