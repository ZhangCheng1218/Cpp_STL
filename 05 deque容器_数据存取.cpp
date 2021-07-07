//#include<iostream>
//#include<string>
//#include<deque>
//
//using namespace std;
////vector 数据存取
//
///*
//at(int idx);		//返回索引idx所指的数据
//operator[];			//返回索引idx所指的数据
//front();			//返回容器中第一个数据元素
//back();				//返回容器中最后一个数据元素
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