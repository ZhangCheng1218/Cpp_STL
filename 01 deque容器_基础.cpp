//#include<iostream>
//#include<string>
//#include<deque>
//
//using namespace std;
////deque容器
////双端数组，可以对头端进行插入删除操作
///*
//deque与vector区别：
//1、vector对于头部的插入删除效率低，数据量越大，效率越低
//2、deque相对而言，对头部的插入删除速度会比vector快
//3、vector访问元素时的速度会比deque快，这和两者内部实现有关
//*/
////deque内部工作原理：
///*
//deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据
//中控器维护的是每个缓冲区的地址，使得使用deque时，像一片连续的内存空间
//*/
//
////deque构造函数
///*
//deque<T> deqT;//默认构造形式
//deque(beg,end);//构造函数将[beg,end)区间中的元素拷贝给本身
//deque(n,elem);//构造函数将n个elem拷贝给本身
//deque(const deque &deq);//拷贝构造函数
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
//	for (size_t i = 0; i < 10; ++i)
//	{
//		d1.push_back(i);
//	}
//	printd(d1);
//
//	deque<int >d2(d1.begin(),d1.end());
//	printd(d2);
//
//	deque<int> d3(5,66);
//	printd(d3);
//
//	deque<int > d4(d3);
//	printd(d4);
//}
//int main()
//{
//	test01();
//	return 0;
//}