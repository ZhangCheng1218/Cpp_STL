//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
////set 大小和交换
///*
//size();
//empty();
//swap(st);
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
//	if (s.empty())
//	{
//		cout << "容器为空！" << endl;
//	}
//	else
//	{
//		printS(s);
//		cout << "s大小为：" << s.size() << endl;
//	}
//
//
//
//	set<int> s2;
//	s2.insert(2);
//	s2.insert(3);
//	s2.insert(4);
//	s2.insert(5);
//	printS(s2);
//
//	s2.swap(s);
//	cout << "交换后----------------------" << endl;
//	printS(s);
//	printS(s2);
//}
//int main()
//{
//	test01();
//	return 0;
//}