//#include<iostream>
//#include<string>
//#include<stack>
//
//using namespace std;
////stack容器
////stack是一种先进后出的数据结构，它只有一个出口
///*
//栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为
//栈中进入数据称为----入栈-push
//栈中弹出数据称为----出栈-pop
//*/
///*常用接口
//构造函数
//stack<T> stk;				//stack采用模板类实现，stack对象的默认构造形式
//stack(const stack&stk);		//拷贝构造函数
//赋值操作
//stack & operator=(const stack &stk);
//数据存取
//push(elem);					//向栈顶添加数据
//pop();						//向栈顶移除第一个元素
//top();						//返回栈元素
//大小操作
//empty();					//判断堆栈是否为空
//size();						//返回栈大小
//
//*/
//void test01() 
//{
//	stack<int> s;
//	s.push(2);
//	s.push(22);
//	s.push(12);
//	s.push(0);
//	s.push(5);
//	cout << "栈stack的大小：" << s.size() << endl;
//	while (!s.empty()) 
//	{
//		cout << s.top() << endl;
//		s.pop();
//	}
//	cout << "pop后栈stack的大小：" << s.size() << endl;
//}
//int main() 
//{
//	test01();
//	return 0;
//}