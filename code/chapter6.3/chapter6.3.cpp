#include<string>
#include<iostream>
#include "Fraction.h"

using namespace std;


int main() {
	//6.3.1
	{
		Fraction a(1, 5);	//直接初始化
		Fraction b(a);		//直接初始化，b为对象a的拷贝
		a *= b;				//调用重载的 * =
		a.operator *= (b);	//与 a*= b 等价
	}
	//6.3.2
	{
		Fraction a(1, 5);	//直接初始化
		Fraction b(a);		//直接初始化，b为对象a的拷贝
		//int operator-(int, int); //错误，不能重新定义内置运算符
		cout << a << " " << b << endl;
	}

	//6.3.5
	{
		Fraction f;
		f(3, 5); //调用函数调用运算符
	}

}
