//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
////set 容器排序
///*
//对于自定义类型数据，必须指定排序规则
//*/
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//};
//
//class Comp
//{
//public:
//	bool operator()(const Person& a, const Person& b) const
//	{
//		return a.m_Age < b.m_Age;
//	}
//};
//void test01()
//{
//	set<Person,Comp> s;
//	Person p1("aaa", 10);
//	Person p2("sss", 13);
//	Person p3("www", 2);
//	Person p4("qqq", 16);
//	Person p5("rrr", 1);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	s.insert(p5);
//
//	for (set<Person, Comp>::iterator sit = s.begin(); sit != s.end(); ++sit)
//	{
//		cout << "姓名： " << (*sit).m_Name
//			<< " 年龄：" << (*sit).m_Age  << endl;
//	}
//
//}
//int main()
//{
//	test01();
//	return 0;
//}