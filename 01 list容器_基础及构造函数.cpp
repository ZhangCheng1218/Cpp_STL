//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
////list容器
////将数据进行链式存储
///*
//链表是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
//链表的组成：链表是由一系列结点组成
//结点的组成：一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域
//数据域用来存放数据，指针域用于存放指向下一个结点的指针
//list优点：可以对任意位置进行快速插入或删除元素、采用动态存储分配，不会造成内存浪费和溢出；
//list缺点：容器遍历速度没有数组快、占用空间比数组大
//list有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的。
//
//STL中的链表是一个双向循环链表，由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器
//
//*/
///*
//list<T> lst;
//list(beg,end);//[beg,end)
//list(n,elem);
//list(const list &lst);
//*/
//
//void printL(const list<int>&l) 
//{
//	for (list<int>::const_iterator cit=l.begin();cit!=l.end();++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> lst;
//	lst.push_back(5);
//	lst.push_back(15);
//	lst.push_back(25);
//	lst.push_back(35);
//	lst.push_back(45);
//
//	printL(lst);
//
//	list<int> lst2(lst.begin(),lst.end());
//	printL(lst2);
//
//	list<int> lst3(10,66);
//	printL(lst3);
//
//	list<int> lst4(lst3);
//	printL(lst4);
//}
//int main()
//{
//	test01();
//	return 0;
//}