//#include<iostream>
//#include<string>
//#include<deque>
//
//using namespace std;
////deque容器 赋值操作
///*
//deque& operator=(const deque &deq);
//assign(beg,end);
//assign(n,elem);
//*/
//
//void printd(const deque<int>& d)//放置修改，用const,同样的迭代器也需要用const的；
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
//	deque<int> d2;
//	d2 = d1;
//	printd(d2);
//
//	deque<int> d3;
//	d3.assign(d1.begin(),d1.end());
//	printd(d3);
//
//	deque<int> d4;
//	d4.assign(5,66);
//	printd(d4);
//}
//int main()
//{
//	test01();
//	return 0;
//}