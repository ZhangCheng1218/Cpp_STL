//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
////list容器 赋值和交换
///*
//assign(beg,end);
//assign(n,elem);
//list& operator=(const list &lst);
//swap(lst);
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
//
//	list<int > lst2;
//	lst2 = lst;
//	printL(lst2);
//	list<int > lst3;
//	lst3.assign(lst.begin(),lst.end());
//	printL(lst3);
//	list<int >lst4;
//	lst4.assign(3,66);
//	printL(lst4);
//
//	cout << "交换后：" << endl;
//	lst4.swap(lst);
//	printL(lst);
//	printL(lst4);
//}
//int main()
//{
//	test01();
//	return 0;
//}