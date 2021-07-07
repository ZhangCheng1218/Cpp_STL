//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector 数据存取
///*
//at(int idx);		//返回索引idx所指的数据
//operator[];			//返回索引idx所指的数据
//front();			//返回容器中第一个数据元素
//back();				//返回容器中最后一个数据元素
//*/
//
//
//void test01()
//{
//	vector<int> v1;
//	for (size_t i = 0; i < 8; ++i)
//	{
//		v1.push_back(i);//尾插
//	}
//	//at返回
//	for (size_t i = 0; i < v1.size(); ++i)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	//中括号重载
//	for (size_t i = 0; i < v1.size(); ++i)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	//输出第一个元素
//	cout << "v1第一个元素为：" << v1.front() << endl;
//	//输出最后一个元素
//	cout << "v1最后一个元素为：" << v1.back() << endl;
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}