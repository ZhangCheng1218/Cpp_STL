//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
////排序案例
///*
//将Person自定义数据类型进行排序，Person中有姓名、年龄、身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高降序
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
//		cout << "姓名： " << (*cit).m_Name
//			<< " 年龄： " << (*cit).m_Age
//			<< " 身高： " << (*cit).m_Height << endl;
//
//	}
//	cout << endl;
//}
////自定义的类需要自定义排序规则
//bool sortAge(Person& p1, Person& p2)
//{
//	//return p1.m_Age < p2.m_Age;
//	if (p1.m_Age == p2.m_Age)
//	{
//		//年龄相同，身高降序
//		return p1.m_Height > p2.m_Height;
//	}
//	else
//	{
//		//年龄不同，年龄升序
//		return p1.m_Age < p2.m_Age;
//	}
//}
//void test01()
//
//{
//	list<Person> l;
//	Person p1("甲", 18, 180);
//	Person p2("乙", 12, 130);
//	Person p3("丙", 13, 150);
//	Person p4("丁", 18, 187);
//	Person p5("戊", 18, 160);
//	Person p6("己", 15, 180);
//	Person p7("庚", 19, 180);
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
//	cout << "----------------排序后----------------------" << endl;
//	l.sort(sortAge);
//	printL(l);
//}
//int main()
//{
//	test01();
//	return 0;
//}