//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
////list容器 数据存取
////不可以用at 和[]来访问，和他的链式结构有关，不支持随机访问，所以只能++  -- 而不能+2这种；
///*
//front();
//back();
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
//
//	lst.push_back(5);
//	lst.push_back(15);
//	lst.push_front(25);
//	lst.push_front(35);
//	lst.push_front(45);
//
//	printL(lst);
//	cout << "前端：" << lst.front()<<"尾部："<<lst.back();
//}
//int main()
//{
//	test01();
//	return 0;
//}