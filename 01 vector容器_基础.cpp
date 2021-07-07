//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector
///*
//1、vector数据结构与数组非常相似，也称单端数组
//2、vector可以动态扩展，数组为静态空间
//3、vector的动态扩展并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间
//*/
////vector构造函数
///*
//vector<T> v;					//采用模板实现类实现，默认构造函数
//vector(v.begin(),v.end());		//将v[begin(),end())区间中的元素拷贝给本身
//vector(n,elem);					//构造函数将n个elem拷贝给本身
//vector(const vector &vec);		//拷贝构造函数
//*/
//void printv(vector<int>& v)
//{
//	for (vector<int >::iterator it=v.begin();it!=v.end();++it)
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
//	printv(v1);
//
//	vector<int > v2(v1.begin(),v1.end());
//	printv(v2);
//
//	vector<int > v3(10,5);
//	printv(v3);
//
//	vector<int > v4(v3);
//	printv(v4);
//	
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}