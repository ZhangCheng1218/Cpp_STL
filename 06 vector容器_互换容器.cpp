//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector ��������
//
//void test01()
//{
//	vector<int> v1;
//	for (size_t i = 0; i < 8; ++i)
//	{
//		v1.push_back(i);
//	}
//	vector<int> v2;
//	for (size_t i = 8; i > 0; --i)
//	{
//		v2.push_back(i);
//	}
//	cout << "����ǰ�� " << endl;
//	for (size_t i = 0; i < v1.size(); ++i)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	for (size_t i = 0; i < v2.size(); ++i)
//	{
//		cout << v2[i] << " ";
//	}
//	cout << endl;
//
//	cout << "������ " << endl;
//	v1.swap(v2);
//	for (size_t i = 0; i < v1.size(); ++i)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	for (size_t i = 0; i < v2.size(); ++i)
//	{
//		cout << v2[i] << " ";
//	}
//	cout << endl;
//}
////��ͨ������swapʵ�ֿռ������
//void test02() 
//{
//	vector<int> v1;
//	for (size_t i = 0; i < 100000; ++i)
//	{
//		v1.push_back(i);
//	}
//	cout << "v1��������" << v1.capacity() << endl;
//	cout << "v1�Ĵ�С��" << v1.size() << endl;
//
//	v1.resize(10);
//	cout << "resize��\nv1��������" << v1.capacity() << endl;
//	cout << "v1�Ĵ�С��" << v1.size() << endl;
//
//	//ͨ����������������
//	vector<int>(v1).swap(v1);
//	cout << "������\nv1��������" << v1.capacity() << endl;
//	cout << "v1�Ĵ�С��" << v1.size() << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}