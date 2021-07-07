//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector赋值操作
///*
//vector& operator=(const vector &vec);//重载等号操作符
//assign(beg,end);//将[beg,end)区间中的数据拷贝赋值给本身
//assign(n,elem);//将n个elem拷贝赋值给本身
//*/
//void printv(vector<int>& v)
//{
//	for (vector<int >::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout <<*it << " ";
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
//	printv(v1);
//
//	vector<int > v2;
//	v2 = v1;
//	printv(v2);
//
//	vector<int > v3;
//	v3.assign(10,6);
//	printv(v3);
//
//	vector<int > v4;
//	v4.assign(v3.begin(), v3.end());
//	printv(v4);
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}