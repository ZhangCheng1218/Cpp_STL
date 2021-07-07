//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector 预留空间
//
//
//void test01()
//{
//	vector<int > v1;
//	int num = 0;
//	int* p = NULL;
//	//直接插10W个数据，容器会多次动态扩展
//	
//	//提前预留10w空间,减少动态扩展------数据量级较大，建议提前预留出来
//	v1.reserve(100000);
//	for (size_t i = 0; i < 100000; ++i)
//	{
//		v1.push_back(i);
//		if (p != &(v1[0]))//看动态扩展次数
//		{
//			p = &(v1[0]);
//			num++;
//		}
//	}
//
//	cout << "num= " << num << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}