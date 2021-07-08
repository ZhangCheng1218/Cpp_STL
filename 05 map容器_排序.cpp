//#include<iostream>
//#include<string>
//#include<map>
//
//using namespace std;
////map 排序
//
///*
//默认从小到大，利用仿函数可改变规则
//*/
//class Person
//{
//public:
//	int m_Age;
//	string m_Name;
//
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//};
////自定义排序规则
//class Dec
//{
//public:
//	bool operator()(const Person& a, const Person& b)const
//	{
//		return a.m_Age > b.m_Age;
//	}
//};
//
//void test01()
//{
//	map<Person, string, Dec> m;
//	Person p1("a", 18);
//	Person p2("b", 3);
//	Person p3("c", 44);
//	Person p4("d", 2);
//
//	m.insert(make_pair(p1, "第一"));
//	m.insert(make_pair(p2, "第二"));
//	m.insert(make_pair(p3, "第三"));
//	m.insert(make_pair(p4, "第四"));
//
//	for (map<Person, string, Dec>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << it->second << "姓名： " << it->first.m_Name << "年龄： " << it->first.m_Age << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}