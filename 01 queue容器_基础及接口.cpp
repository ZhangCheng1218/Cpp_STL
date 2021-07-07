//#include<iostream>
//#include<string>
//#include<queue>
//
//using namespace std;
////队列 queue
////queue是一种先进先出的数据结构，它有两个出口
///*
//队列容器允许从一端新增元素，从另一端移除元素
//队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
//队列中进数据称为----入队push
//队列中出数据称为----出队pop
//*/
///*常用接口
//构造函数
//queue<T> que;				//queue采用模板类实现，queue对象的默认构造形式
//queue(const stack&que);		//拷贝构造函数
//赋值操作
//queue & operator=(const queue &que);
//数据存取
//push(elem);					//向队尾添加数据
//pop();						//从队头移除第一个元素
//back();						//返回最后一个元素
//front();					//返回第一个元素
//大小操作
//empty();					//判断堆栈是否为空
//size();						//返回栈大小
//
//*/
//
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//};
//void test01()
//{
//	queue<Person> q;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	q.push(p5);
//
//	while (!q.empty())
//	{
//		cout << "队头：\n姓名：" << q.front().m_Name << "年龄：" << q.front().m_Age
//			<< "\n队尾：\n姓名：" << q.back().m_Name << "年龄：" << q.back().m_Age << endl;
//		cout << endl;
//		q.pop();
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}