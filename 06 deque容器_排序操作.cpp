//#include<iostream>
//#include<string>
//#include<deque>
//#include<algorithm>
//
//using namespace std;
////deque ���ݴ�ȡ
//
///*
//at(int idx);		//��������idx��ָ������
//operator[];			//��������idx��ָ������
//front();			//���������е�һ������Ԫ��
//back();				//�������������һ������Ԫ��
//*/
//void printd(const deque<int>& d)
//{
//	for (deque<int>::const_iterator cit = d.begin(); cit != d.end(); ++cit)
//	{
//		cout << *cit << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d1;
//	d1.push_back(32);
//	d1.push_back(3);
//	d1.push_back(42);
//	d1.push_front(66);
//	d1.push_front(2);
//	d1.push_front(44);
//
//	printd(d1);
//	sort(d1.begin(),d1.end());
//	cout << "�����" << endl;
//	printd(d1);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}