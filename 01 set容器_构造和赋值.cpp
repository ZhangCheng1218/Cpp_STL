//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
////set
///*
//����Ԫ�ض����ڲ���ʱ�Զ�������
//���ʣ�
//set/multiset���ڹ���ʽ�������ײ�ṹʹ�ö�����ʵ�֡�
//����
//set���������������ظ���Ԫ��,�ظ���Ԫ�ز��������ǲ�����
//multiset�������������ظ���Ԫ��
//*/
///*����͸�ֵ
//set<T> st;
//set(const set &st);
//
//set& operator=(const set &st);
//*/
//void printS(const set<int>& s)
//{
//	for (set<int>::const_iterator cit = s.begin(); cit != s.end(); ++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int> s;
//	s.insert(5);
//	s.insert(15);
//	s.insert(2);
//	s.insert(2);
//	s.insert(3);
//	s.insert(-5);
//	s.insert(6);
//	printS(s);
//
//
//	set<int> s2;
//	s2 = s;
//	printS(s2);
//}
//int main()
//{
//	test01();
//	return 0;
//}