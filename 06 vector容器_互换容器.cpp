//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector 互换容器
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
//	cout << "交换前： " << endl;
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
//	cout << "交换后： " << endl;
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
////可通过巧用swap实现空间的收缩
//void test02() 
//{
//	vector<int> v1;
//	for (size_t i = 0; i < 100000; ++i)
//	{
//		v1.push_back(i);
//	}
//	cout << "v1的容量：" << v1.capacity() << endl;
//	cout << "v1的大小：" << v1.size() << endl;
//
//	v1.resize(10);
//	cout << "resize后\nv1的容量：" << v1.capacity() << endl;
//	cout << "v1的大小：" << v1.size() << endl;
//
//	//通过匿名对象来收缩
//	vector<int>(v1).swap(v1);
//	cout << "收缩后\nv1的容量：" << v1.capacity() << endl;
//	cout << "v1的大小：" << v1.size() << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}