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
//1����˾������Ƹ10��Ա����ABCDEFGHIJ����10��Ա�����빫˾����Ҫָ��Ա�����ĸ����Ź���
//2��Ա����Ϣ�У�������������ɣ����ַ�Ϊ���߻����������з�
//3�������10��Ա�����䲿�ź͹���
//4��ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value��Ա����
//5���ֲ�����ʾԱ����Ϣ
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
//		p.m_Name = "Ա��";
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
//	cout << "�߻����ţ�" << endl;
//	int num1 = m.count(CEHUA);
//	for (int i = 0; pos != m.end() && i < num1; ++pos, ++i)
//	{
//		cout << "������ " << (*pos).second.m_Name << " нˮ�� " << (*pos).second.m_Salary << endl;
//	}
//
//	cout << "�������ţ�" << endl;
//	pos = m.find(MEISHU);
//	int num2 = m.count(MEISHU);
//	for (int i = 0; pos != m.end() && i < num2; ++pos, ++i)
//	{
//		cout << "������ " << (*pos).second.m_Name << " нˮ�� " << (*pos).second.m_Salary << endl;
//	}
//
//	cout << "�з����ţ�" << endl;
//	pos = m.find(YANFA);
//	int num3 = m.count(YANFA);
//	for (int i = 0; pos != m.end() && i < num3; ++pos, ++i)
//	{
//		cout << "������ " << (*pos).second.m_Name << " нˮ�� " << (*pos).second.m_Salary << endl;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//�����Ա
//	vector<Person> v;
//	setPerson(v);
//	//for (vector<Person>::iterator it=v.begin();it!=v.end();++it)
//	//{
//	//	cout << "������ " << (*it).m_Name << " нˮ�� " << (*it).m_Salary << endl;
//	//}
//	//����
//	multimap<int, Person> m;
//	setGroup(m, v);
//	//��ʾ
//	showPerson(m);
//	return 0;
//}
//
