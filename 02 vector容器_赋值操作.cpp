//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector��ֵ����
///*
//vector& operator=(const vector &vec);//���صȺŲ�����
//assign(beg,end);//��[beg,end)�����е����ݿ�����ֵ������
//assign(n,elem);//��n��elem������ֵ������
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