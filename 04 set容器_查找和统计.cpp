//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
////set 查找和统计
///*
//find(key);//查找key是否存在，存在返回该键的元素迭代器，不存在，返回set.end();
//count(key);//key的元素个数
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
//	set<int>::iterator pos = s.find(22);
//	if (pos != s.end())
//	{
//		cout << "找到该元素！共：" <<s.count(2) << endl;
//
//	}
//	else
//	{
//		cout << "未找到！" << endl;
//	}
//
//
//
//}
//int main()
//{
//	test01();
//	return 0;
//}