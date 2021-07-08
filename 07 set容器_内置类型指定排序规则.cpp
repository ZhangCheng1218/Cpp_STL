//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
////set ÈİÆ÷ÅÅĞò
///*
//
//*/
//void printS( set<int>& s)
//{
//	for (set<int>::iterator cit = s.begin(); cit != s.end(); ++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//}
//
//class Comp 
//{
//public:
//	bool operator()(int a,int b) const
//	{
//		return a > b;
//	}
//};
//void test01()
//{
//	set<int> s;
//	s.insert(5);
//	s.insert(3);
//	s.insert(25);
//	s.insert(45);
//	s.insert(-5);
//	s.insert(1);
//	//Ä¬ÈÏÉıĞòÅÅÁĞ
//	printS(s);
//	//½µĞòÅÅÁĞ
//	set<int, Comp> ss;
//	ss.insert(5);
//	ss.insert(3);
//	ss.insert(25);
//	ss.insert(45);
//	ss.insert(-5);
//	ss.insert(1);
//
//	for (set<int, Comp>::iterator it = ss.begin(); it != ss.end(); ++it)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}