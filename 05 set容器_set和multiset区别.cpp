//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
////set 和multiset区别
///*
//set不可以插入重复数据，而multiset可以
//set插入数据的同时会返回插入结果，表示插入是否成功
//multiset不会检测数据，因此可以插入重复数据
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
//	pair<set<int>::iterator, bool> res = s.insert(3);
//	if (res.second)
//	{
//		cout << "第一次插入成功！" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败！" << endl;
//	}
//
//	res = s.insert(3);
//	if (res.second)
//	{
//		cout << "第二次插入成功！" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败！" << endl;
//	}
//
//	multiset<int> ms;
//	ms.insert(3);
//	ms.insert(3);
//	ms.insert(3);
//	for (multiset<int>::const_iterator cit = ms.begin(); cit != ms.end(); ++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}