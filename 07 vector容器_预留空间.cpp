//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector Ԥ���ռ�
//
//
//void test01()
//{
//	vector<int > v1;
//	int num = 0;
//	int* p = NULL;
//	//ֱ�Ӳ�10W�����ݣ��������ζ�̬��չ
//	
//	//��ǰԤ��10w�ռ�,���ٶ�̬��չ------���������ϴ󣬽�����ǰԤ������
//	v1.reserve(100000);
//	for (size_t i = 0; i < 100000; ++i)
//	{
//		v1.push_back(i);
//		if (p != &(v1[0]))//����̬��չ����
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