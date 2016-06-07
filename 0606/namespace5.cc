 ///
 /// @file    namespace5.cc
 /// @author  viper(836505080@qq.com)
 /// @date    2016-06-07 19:03:12
 ///
 
#include<stdio.h>//c头文件中的实体都是位于匿名空间之中的
#include <iostream>

using std::cout;
using std::endl;
//没有取名字的空间叫 匿名空间

extern int num=0;

namespace B
{
	int num=1;
}
namespace A
{
	int num=2;
	void displayA()
	{
		cout<<"displayA中的num="<<num<<endl;
		cout<<"A::num="<<A::num<<endl;
		cout<<"b::num="<<B::num<<endl;
		cout<<"外部变量中的num="<<::num<<endl;
		printf("--------------\n");

	}
}

namespace B
{
	void displayB()
	{
		A::displayA();
	}
	namespace C
	{
		void displayC()
		{
			cout<<"C::displsyC()"<<endl;
		}
	}
}

int main()
{
	printf("A::\n");
	A::displayA();

	printf("B::\n");
	B::displayB();
	printf("B::C::\n");
	B::C::displayC();
}