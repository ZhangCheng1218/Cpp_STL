//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector容量和大小
///*
//empty();				//判断容器是否为空
//capacity();				//容器的容量
//size();					//返回容器中元素个数
//resize(int num);		//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//						//如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num,elem);	//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//						//如果容器变短，则末尾超出容器长度的元素被删除
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
//		cout << "为空！" << endl;
//	}
//	else
//	{
//		printv(v1);
//		cout << "v1的容量： " << v1.capacity()
//			<< "\nv1的大小：" << v1.size() << endl;
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