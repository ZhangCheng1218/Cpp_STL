//#include<iostream>
//#include<string>
//#include<deque>
//
//using namespace std;
////deque 插入与删除
///*两端插入操作
//push_back(elem);		//尾部插入
//push_front(elem);		//头部插入
//pop_back();				//删除容器最后一个数据
//pop_front();			//删除容器第一个数据
//*/
//
///*指定位置操作
//insert(pos,elem);		//在pos位置插入一个elem元素拷贝，返回新数据的位置
//insert(pos,n,elem);		//在pos位置插入n个elem数据，无返回值
//insert(pos,beg,end);	//在pos位置插入[beg,end)区间的数据，无返回值
//clear();				//清空容器所有数据
//erase(beg,end);			//删除[beg,end)区间的数据，返回下一个数据的位置
//erase(pos);				//删除pos位置的数据，返回下一个数据的位置
//*/
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
//	d1.push_back(22);
//	d1.push_back(23);
//	d1.push_back(24);
//	d1.push_back(26);
//	d1.push_front(19);
//
//	printd(d1);
//	d1.pop_back();
//	d1.pop_front();
//	printd(d1);
//}
//void test02() 
//{
//	deque<int> d2;
//	for (size_t i = 0; i < 6; ++i)
//	{
//		d2.push_back(i);
//	}
//	printd(d2);
//	d2.insert(d2.begin(),66);
//	printd(d2);
//	d2.insert(d2.begin(),2, 77);
//	printd(d2);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}