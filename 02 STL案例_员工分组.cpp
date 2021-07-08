//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<ctime>
//
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//using namespace std;
///*
//1、公司今天招聘10个员工（ABCDEFGHIJ），10名员工进入公司后，需要指派员工在哪个部门工作
//2、员工信息有：姓名、工资组成；部分分为：策划、美术、研发
//3、随机给10名员工分配部门和工资
//4、通过multimap进行信息的插入 key(部门编号) value（员工）
//5、分部门显示员工信息
//*/
//class Person
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//class Department
//{
//public:
//
//};
//void setPerson(vector<Person>& v)
//{
//	string nameS = "ABCDEFGHIJ";
//	for (size_t i = 0; i < 10; i++)
//	{
//		Person p;
//		p.m_Name = "员工";
//		p.m_Name += nameS[i];
//		p.m_Salary = rand() % 10000 + 10000;
//		v.push_back(p);
//	}
//}
//void setGroup(multimap<int, Person>& m, vector<Person>& v)
//{
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		int num = rand() % 3;
//		m.insert(make_pair(num, *it));
//	}
//}
//void showPerson(multimap<int, Person>& m)
//{
//	multimap<int, Person>::iterator pos = m.find(CEHUA);
//	cout << "策划部门：" << endl;
//	int num1 = m.count(CEHUA);
//	for (int i = 0; pos != m.end() && i < num1; ++pos, ++i)
//	{
//		cout << "姓名： " << (*pos).second.m_Name << " 薪水： " << (*pos).second.m_Salary << endl;
//	}
//
//	cout << "美工部门：" << endl;
//	pos = m.find(MEISHU);
//	int num2 = m.count(MEISHU);
//	for (int i = 0; pos != m.end() && i < num2; ++pos, ++i)
//	{
//		cout << "姓名： " << (*pos).second.m_Name << " 薪水： " << (*pos).second.m_Salary << endl;
//	}
//
//	cout << "研发部门：" << endl;
//	pos = m.find(YANFA);
//	int num3 = m.count(YANFA);
//	for (int i = 0; pos != m.end() && i < num3; ++pos, ++i)
//	{
//		cout << "姓名： " << (*pos).second.m_Name << " 薪水： " << (*pos).second.m_Salary << endl;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//添加人员
//	vector<Person> v;
//	setPerson(v);
//	//for (vector<Person>::iterator it=v.begin();it!=v.end();++it)
//	//{
//	//	cout << "姓名： " << (*it).m_Name << " 薪水： " << (*it).m_Salary << endl;
//	//}
//	//分组
//	multimap<int, Person> m;
//	setGroup(m, v);
//	//显示
//	showPerson(m);
//	return 0;
//}
//
