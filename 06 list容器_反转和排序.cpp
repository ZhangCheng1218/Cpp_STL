//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
////list容器 反转和排序
////所有不支持随机访问迭代器的容器，不支持标准算法，但是其内部会提供对应算法
///*
//reverse();//反转
//sort();
//*/
//void printL(const list<int>& l)
//{
//	for (list<int>::const_iterator cit = l.begin(); cit != l.end(); ++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//}
//bool des(int a,int b) 
//{
//	return a > b;
//}
//void test01()
//{
//	list<int> lst;
//
//	lst.push_back(5);
//	lst.push_back(15);
//	lst.push_front(25);
//	lst.push_front(35);
//	lst.push_front(45);
//
//	printL(lst);
//	lst.reverse();
//	cout << "反转后：" << endl;
//	printL(lst);
//	lst.sort();//默认升序
//
//	cout << "排序后：" << endl;
//	printL(lst);
//	//降序需要写个函数
//	lst.sort(des);
//	printL(lst);
//}
//int main()
//{
//	test01();
//	return 0;
//}