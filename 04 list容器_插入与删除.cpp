//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
////listÈİÆ÷ ²åÈëÓëÉ¾³ı
///*
//push_back(elem);
//pop_back();
//push_front(elem);
//pop_front();
//
//insert(pop,elem);
//insert(pop,n,elem);
//insert(pos,beg,end);
//clear();
//
//erase(beg,end);
//erase(pos);
//remove(elem);
//*/
//
//void printL(const list<int>& l)
//{
//	for (list<int>::const_iterator cit = l.begin(); cit != l.end(); ++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> lst;
//
//	lst.push_back(5);
//	lst.push_back(15);
//	lst.push_front(25);
//	lst.push_front(35);
//	lst.push_front(45);
//
//	printL(lst);
//	lst.pop_back();
//	lst.pop_front();
//	printL(lst);
//
//	list<int>::iterator it = lst.begin();
//	lst.insert(++it,3,11);
//	printL(lst);
//
//	it = lst.begin();
//	lst.erase(it);
//	printL(lst);
//
//	lst.remove(11);
//	printL(lst);
//}
//int main()
//{
//	test01();
//	return 0;
//}