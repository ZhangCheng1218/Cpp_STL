//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
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
//
//void test01()
//{
//	vector<Person> v;
//	Person p1("赵", 130);
//	Person p2("钱", 123);
//	Person p3("孙", 142);
//	Person p4("李", 150);
//	Person p5("周", 120);
//	Person p6("吴", 140);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		//cout << "姓名：" << it->m_Name
//		//	<< "\t年龄：" << it->m_Age << endl;
//
//		cout << "姓名：" << (*it).m_Name         //(*it)-----Person
//			<< "\t年龄：" << (*it).m_Age << endl;
//	}
//}
//void test02()
//{
//	vector<Person*> v;
//	Person p1("赵", 130);
//	Person p2("钱", 123);
//	Person p3("孙", 142);
//	Person p4("李", 150);
//	Person p5("周", 120);
//	Person p6("吴", 140);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	v.push_back(&p6);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << "姓名：" << (*it)->m_Name
//			<< "年龄：" << (*it)->m_Age << endl;
//
//	}
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//
//}
