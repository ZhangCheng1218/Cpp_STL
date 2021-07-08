//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
////set
///*
//所有元素都会在插入时自动被排序
//本质：
//set/multiset属于关联式容器，底层结构使用二叉树实现。
//区别：
//set不允许容器中有重复的元素,重复的元素不报错，但是不插入
//multiset允许容器中有重复的元素
//*/
///*构造和赋值
//set<T> st;
//set(const set &st);
//
//set& operator=(const set &st);
//*/
//void printS(const set<int>& s)
//{
//	for (set<int>::const_iterator cit = s.begin(); cit != s.end(); ++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int> s;
//	s.insert(5);
//	s.insert(15);
//	s.insert(2);
//	s.insert(2);
//	s.insert(3);
//	s.insert(-5);
//	s.insert(6);
//	printS(s);
//
//
//	set<int> s2;
//	s2 = s;
//	printS(s2);
//}
//int main()
//{
//	test01();
//	return 0;
//}