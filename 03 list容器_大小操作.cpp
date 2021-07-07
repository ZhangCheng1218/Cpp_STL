//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
////list容器 大小操作
///*
//size();
//empty();
//resize(num);
//resize(num,elem);
//*/
//
//void printL(const list<int>& l)
//{
//	for (list<int>::const_iterator cit = l.begin(); cit != l.end(); ++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> lst;
//	lst.push_back(5);
//	lst.push_back(15);
//	lst.push_back(25);
//	lst.push_back(35);
//	lst.push_back(45);
//
//	printL(lst);
//	cout <<"lst大小为：" << lst.size() << endl;
//	lst.resize(10);
//	cout << "lst大小为：" << lst.size() << endl;
//	printL(lst);
//	lst.resize(15,99);
//	cout << "lst大小为：" << lst.size() << endl;
//	printL(lst);
//
//}
//int main()
//{
//	test01();
//	return 0;
//}