//#include<iostream>
//#include<string>
//#include<map>
//
//using namespace std;
////map 大小和交换
//
///*
//size();
//empty();
//swap(st);
//*/
//void printM(map<int, string>& m)
//{
//	for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << "key： " << (*it).first
//			<< " value： " << it->second << endl;
//	}
//	cout << "***************" << endl;
//}
//void test01()
//{
//	map<int, string>m;
//	m.insert(pair<int, string>(1, "aaa"));
//	m.insert(pair<int, string>(13, "sss"));
//	m.insert(pair<int, string>(4, "ddd"));
//	m.insert(pair<int, string>(6, "qqq"));
//	m.insert(pair<int, string>(2, "www"));
//	cout << "m.size=" << m.size() << endl;
//	printM(m);
//
//	map<int, string>m1;
//	m1.insert(pair<int, string>(1, "esf"));
//	m1.insert(pair<int, string>(3, "fsrfs"));
//	printM(m1);
//	cout << "交换后：" << endl;
//	m1.swap(m);
//	printM(m);
//	printM(m1);
//}
//int main()
//{
//	test01();
//	return 0;
//}