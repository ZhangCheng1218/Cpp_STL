//#include<iostream>
//#include<string>
//#include<deque>
//
//using namespace std;
////deque����
////˫�����飬���Զ�ͷ�˽��в���ɾ������
///*
//deque��vector����
//1��vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
//2��deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻ��vector��
//3��vector����Ԫ��ʱ���ٶȻ��deque�죬��������ڲ�ʵ���й�
//*/
////deque�ڲ�����ԭ��
///*
//deque�ڲ��и��п�����ά��ÿ�λ������е����ݣ��������д����ʵ����
//�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ����һƬ�������ڴ�ռ�
//*/
//
////deque���캯��
///*
//deque<T> deqT;//Ĭ�Ϲ�����ʽ
//deque(beg,end);//���캯����[beg,end)�����е�Ԫ�ؿ���������
//deque(n,elem);//���캯����n��elem����������
//deque(const deque &deq);//�������캯��
//*/
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
//	printd(d1);
//
//	deque<int >d2(d1.begin(),d1.end());
//	printd(d2);
//
//	deque<int> d3(5,66);
//	printd(d3);
//
//	deque<int > d4(d3);
//	printd(d4);
//}
//int main()
//{
//	test01();
//	return 0;
//}