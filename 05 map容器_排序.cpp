//#include<iostream>
//#include<string>
//#include<map>
//
//using namespace std;
////map ����
//
///*
//Ĭ�ϴ�С�������÷º����ɸı����
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
////�Զ����������
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
//	m.insert(make_pair(p1, "��һ"));
//	m.insert(make_pair(p2, "�ڶ�"));
//	m.insert(make_pair(p3, "����"));
//	m.insert(make_pair(p4, "����"));
//
//	for (map<Person, string, Dec>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << it->second << "������ " << it->first.m_Name << "���䣺 " << it->first.m_Age << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}