//#include<iostream>
//#include<string>
//#include<deque>
//
//using namespace std;
////dequeû���������� �������ڲ��ṹ�й�
///*
//empty();				//�ж������Ƿ�Ϊ��
//size();					//����������Ԫ�ظ���
//resize( num);		//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//						//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize( num,elem);	//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//						//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//*/
//
//void printd(const deque<int>& d)//�����޸ģ���const,ͬ���ĵ�����Ҳ��Ҫ��const�ģ�
//{
//	for (deque<int>::const_iterator cit = d.begin(); cit != d.end(); cit++)
//	{
//		cout << *cit << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int> d1;
//	for (size_t i = 0; i < 10; ++i)
//	{
//		d1.push_back(i);
//	}
//	if (d1.empty())
//	{
//		cout << "����Ϊ�գ�" << endl;
//	}
//	else
//	{
//		printd(d1);
//		cout << "d1�Ĵ�СΪ�� " << d1.size() << endl;
//	}
//	deque<int> d2;
//	d2.resize(10);
//	printd(d2);
//	cout << "d2�Ĵ�СΪ�� " << d2.size() << endl;
//
//	deque<int> d3;
//	d3.resize(10, 66);
//	printd(d3);
//	cout << "d3�Ĵ�СΪ�� " << d3.size() << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}