//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
////������
///*
//��Person�Զ����������ͽ�������Person�������������䡢���
//������򣺰�����������������������ͬ������߽���
//*/
//class Person
//{
//public:
//	Person(string name, int age, int height)
//	{
//		this->m_Age = age;
//		this->m_Height = height;
//		this->m_Name = name;
//	}
//	string m_Name;
//	int m_Age;
//	int m_Height;
//};
//
//void printL(const list<Person>& l)
//{
//	for (list<Person>::const_iterator cit = l.begin(); cit != l.end(); ++cit)
//	{
//		cout << "������ " << (*cit).m_Name
//			<< " ���䣺 " << (*cit).m_Age
//			<< " ��ߣ� " << (*cit).m_Height << endl;
//
//	}
//	cout << endl;
//}
////�Զ��������Ҫ�Զ����������
//bool sortAge(Person& p1, Person& p2)
//{
//	//return p1.m_Age < p2.m_Age;
//	if (p1.m_Age == p2.m_Age)
//	{
//		//������ͬ����߽���
//		return p1.m_Height > p2.m_Height;
//	}
//	else
//	{
//		//���䲻ͬ����������
//		return p1.m_Age < p2.m_Age;
//	}
//}
//void test01()
//
//{
//	list<Person> l;
//	Person p1("��", 18, 180);
//	Person p2("��", 12, 130);
//	Person p3("��", 13, 150);
//	Person p4("��", 18, 187);
//	Person p5("��", 18, 160);
//	Person p6("��", 15, 180);
//	Person p7("��", 19, 180);
//
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	l.push_back(p6);
//	l.push_back(p7);
//	printL(l);
//
//	cout << "----------------�����----------------------" << endl;
//	l.sort(sortAge);
//	printL(l);
//}
//int main()
//{
//	test01();
//	return 0;
//}