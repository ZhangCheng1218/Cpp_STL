//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector
///*
//1��vector���ݽṹ������ǳ����ƣ�Ҳ�Ƶ�������
//2��vector���Զ�̬��չ������Ϊ��̬�ռ�
//3��vector�Ķ�̬��չ��������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�
//*/
////vector���캯��
///*
//vector<T> v;					//����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(),v.end());		//��v[begin(),end())�����е�Ԫ�ؿ���������
//vector(n,elem);					//���캯����n��elem����������
//vector(const vector &vec);		//�������캯��
//*/
//void printv(vector<int>& v)
//{
//	for (vector<int >::iterator it=v.begin();it!=v.end();++it)
//	{
//		cout << *it << " ";
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
//	vector<int > v2(v1.begin(),v1.end());
//	printv(v2);
//
//	vector<int > v3(10,5);
//	printv(v3);
//
//	vector<int > v4(v3);
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