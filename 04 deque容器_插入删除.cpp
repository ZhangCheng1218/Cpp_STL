//#include<iostream>
//#include<string>
//#include<deque>
//
//using namespace std;
////deque ������ɾ��
///*���˲������
//push_back(elem);		//β������
//push_front(elem);		//ͷ������
//pop_back();				//ɾ���������һ������
//pop_front();			//ɾ��������һ������
//*/
//
///*ָ��λ�ò���
//insert(pos,elem);		//��posλ�ò���һ��elemԪ�ؿ��������������ݵ�λ��
//insert(pos,n,elem);		//��posλ�ò���n��elem���ݣ��޷���ֵ
//insert(pos,beg,end);	//��posλ�ò���[beg,end)��������ݣ��޷���ֵ
//clear();				//���������������
//erase(beg,end);			//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
//erase(pos);				//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
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
//	d1.push_back(22);
//	d1.push_back(23);
//	d1.push_back(24);
//	d1.push_back(26);
//	d1.push_front(19);
//
//	printd(d1);
//	d1.pop_back();
//	d1.pop_front();
//	printd(d1);
//}
//void test02() 
//{
//	deque<int> d2;
//	for (size_t i = 0; i < 6; ++i)
//	{
//		d2.push_back(i);
//	}
//	printd(d2);
//	d2.insert(d2.begin(),66);
//	printd(d2);
//	d2.insert(d2.begin(),2, 77);
//	printd(d2);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}