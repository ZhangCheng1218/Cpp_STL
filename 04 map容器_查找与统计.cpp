//#include<iostream>
//#include<string>
//#include<map>
//
//using namespace std;
////map 查找和统计
//
///*
//find(key);//返回的迭代器
//count(key);
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
//
//	//1
//	m.insert(pair<int, string>(1, "aaa"));
//	//2
//	m.insert(make_pair(2, "sfsd"));
//	//3
//	m.insert(map<int, string>::value_type(3, "asd"));
//	//4
//	m[4] = "sdfas";
//
//	printM(m);
//
//	map<int, string >::iterator it = m.find(3);
//	if (it!=m.end())
//	{
//		cout << "找到！" << endl<<m.count(3);
//	
//	}
//	else
//	{
//		cout << "没找到！" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}