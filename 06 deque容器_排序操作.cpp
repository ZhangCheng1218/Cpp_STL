//#include<iostream>
//#include<string>
//#include<deque>
//#include<algorithm>
//
//using namespace std;
////deque 数据存取
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
//	d1.push_back(32);
//	d1.push_back(3);
//	d1.push_back(42);
//	d1.push_front(66);
//	d1.push_front(2);
//	d1.push_front(44);
//
//	printd(d1);
//	sort(d1.begin(),d1.end());
//	cout << "排序后：" << endl;
//	printd(d1);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}