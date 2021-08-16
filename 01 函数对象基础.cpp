//#include<iostream>
//#include<string>
//
//using namespace std;
////函数对象
///*
//重载函数调用操作符的类，其对象常称为函数对象
//函数对象使用重载的()时，行为类似函数使用，也叫仿函数
//本质：
//函数对象（仿函数）是一个类。不是一个函数
//*/
///*函数对象使用
//函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//函数对象超出普通函数的概念，函数对象可以有自己的状态
//函数对象可以作为参数传递
//*/
//class myPrint
//{
//public:
//	myPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string str)
//	{
//		count++;
//		cout << str << endl;
//	}
//	int count;//内部状态
//};
//
//void test01()
//{
//	myPrint mp;
//	mp("测试！");
//}
//int main()
//{
//	test01();
//	return 0;
//
//}
