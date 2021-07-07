//#include<iostream>
//#include<string>
//#include<deque>
//
//using namespace std;
////deque没有容量概念 和他的内部结构有关
///*
//empty();				//判断容器是否为空
//size();					//返回容器中元素个数
//resize( num);		//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//						//如果容器变短，则末尾超出容器长度的元素被删除。
//resize( num,elem);	//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//						//如果容器变短，则末尾超出容器长度的元素被删除
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
//	if (d1.empty())
//	{
//		cout << "容器为空！" << endl;
//	}
//	else
//	{
//		printd(d1);
//		cout << "d1的大小为： " << d1.size() << endl;
//	}
//	deque<int> d2;
//	d2.resize(10);
//	printd(d2);
//	cout << "d2的大小为： " << d2.size() << endl;
//
//	deque<int> d3;
//	d3.resize(10, 66);
//	printd(d3);
//	cout << "d3的大小为： " << d3.size() << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}