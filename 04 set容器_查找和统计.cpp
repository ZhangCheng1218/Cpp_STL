//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
////set ���Һ�ͳ��
///*
//find(key);//����key�Ƿ���ڣ����ڷ��ظü���Ԫ�ص������������ڣ�����set.end();
//count(key);//key��Ԫ�ظ���
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
//	set<int>::iterator pos = s.find(22);
//	if (pos != s.end())
//	{
//		cout << "�ҵ���Ԫ�أ�����" <<s.count(2) << endl;
//
//	}
//	else
//	{
//		cout << "δ�ҵ���" << endl;
//	}
//
//
//
//}
//int main()
//{
//	test01();
//	return 0;
//}