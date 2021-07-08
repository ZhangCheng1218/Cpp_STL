//#include<iostream>
//#include<string>
//#include<map>
//
//using namespace std;
////map ²åÈëºÍÉ¾³ı
//
///*
//insert(elem);
//clear();
//erase(pos);
//erase(beg,end);
//erase(key);
//*/
//void printM(map<int, string>& m)
//{
//	for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << "key£º " << (*it).first
//			<< " value£º " << it->second << endl;
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
//	m.erase(m.begin());
//	printM(m);
//}
//int main()
//{
//	test01();
//	return 0;
//}