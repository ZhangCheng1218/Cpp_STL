//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
////set ��multiset����
///*
//set�����Բ����ظ����ݣ���multiset����
//set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//multiset���������ݣ���˿��Բ����ظ�����
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
//	pair<set<int>::iterator, bool> res = s.insert(3);
//	if (res.second)
//	{
//		cout << "��һ�β���ɹ���" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ�ܣ�" << endl;
//	}
//
//	res = s.insert(3);
//	if (res.second)
//	{
//		cout << "�ڶ��β���ɹ���" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ�ܣ�" << endl;
//	}
//
//	multiset<int> ms;
//	ms.insert(3);
//	ms.insert(3);
//	ms.insert(3);
//	for (multiset<int>::const_iterator cit = ms.begin(); cit != ms.end(); ++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}