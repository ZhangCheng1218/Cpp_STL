//#include<iostream>
//#include<string>
//#include<map>
//
//using namespace std;
////map
///*
//map������Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey(��ֵ)�����������ã��ڶ���Ԫ��Ϊvalue(ʵֵ)
//����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
//*/
//
///*
//���ʣ�
//map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
//�ŵ㣺
//���Ը���keyֵ�����ҵ�valueֵ
//
//����
//map���������������ظ�keyֵԪ��
//multimap�������������ظ�keyֵԪ��
//*/
///*
//���죺
//map<T1,T2>mp;
//map(const map &mp);
//��ֵ��
//map& operator=(const map &mp);
//*/
//void printM(map<int, string>& m)
//{
//	for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it)
//	{
//		cout << "key�� " << (*it).first
//			<< " value�� " << it->second << endl;
//	}
//	cout << "***************" << endl;
//}
//void test01()
//{
//	map<int, string>m;
//	m.insert(pair<int, string>(1, "aaa"));
//	m.insert(pair<int, string>(13, "sss"));
//	m.insert(pair<int, string>(4, "ddd"));
//	m.insert(pair<int, string>(6, "qqq"));
//	m.insert(pair<int, string>(2, "www"));
//
//	printM(m);
//
//	map<int, string>m1;
//	m1 = m;
//	printM(m1);
//
//	map<int, string>m2(m);
//	printM(m2);
//}
//int main()
//{
//	test01();
//	return 0;
//}