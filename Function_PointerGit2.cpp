// FunctionPointersGit.cpp : Defines the entry point for the console application.
//

// without return type, without arguments.
#include "stdafx.h"
#include <iostream>
using namespace std;

//void fun()
//{
//	cout << "Hello World" << endl;
//}
//
//int main()
//{
//	void(*fp)();
//	fp = fun;
//	(*fp)(); // calling
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////

// without arguments, with return type

//int fun()
//{
//	return 32;
//}
//
//int main()
//{
//	int(*fp)();
//	fp = fun;
//	int result = (*fp)();
//	cout << "Result is: " << result << endl;
//
//	return 0;
//}
///////////////////////////////////////////////////////////////////////////////

// with arguments, with return type

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int(*fp)(int, int);
//	fp = Add;
//	int result = (*fp)(10, 20);
//	cout << "Result is: " << result << endl;;
//
//	return 0;
//}
///////////////////////////////////////////////////////////////////////////////

// with arguments, without return type

void Add(int x, int y)
{
	cout << "Result is: " << x + y << endl;
}

int main()
{
	void(*fp)(int, int);
	fp = Add;
	(*fp)(10, 20);

	return 0;
}