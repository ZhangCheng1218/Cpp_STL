//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector�����ʹ�С
///*
//empty();				//�ж������Ƿ�Ϊ��
//capacity();				//����������
//size();					//����������Ԫ�ظ���
//resize(int num);		//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//						//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(int num,elem);	//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//						//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//
//
//*/
//void printv(vector<int>& v)
//{
//	for (vector<int >::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	for (size_t i = 0; i < 8; ++i)
//	{
//		v1.push_back(i);
//	}
//	if (v1.empty())
//	{
//		cout << "Ϊ�գ�" << endl;
//	}
//	else
//	{
//		printv(v1);
//		cout << "v1�������� " << v1.capacity()
//			<< "\nv1�Ĵ�С��" << v1.size() << endl;
//	}
//
//	v1.resize(10,6);
//	printv(v1);
//
//	v1.resize(4);
//	printv(v1);
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}