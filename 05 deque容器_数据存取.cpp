//#include<iostream>
//#include<string>
//#include<deque>
//
//using namespace std;
////vector ���ݴ�ȡ
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
//	for (size_t i = 0; i < 10; ++i)
//	{
//		d1.push_back(i);
//	}
//	printd(d1);
//
//	cout << d1.at(5)<<"\n"
//		<< d1[6] << "\n"
//		<<d1.front() << "\n"
//		<<d1.back()<< endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}