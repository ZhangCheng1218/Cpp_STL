//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector ���ݴ�ȡ
///*
//at(int idx);		//��������idx��ָ������
//operator[];			//��������idx��ָ������
//front();			//���������е�һ������Ԫ��
//back();				//�������������һ������Ԫ��
//*/
//
//
//void test01()
//{
//	vector<int> v1;
//	for (size_t i = 0; i < 8; ++i)
//	{
//		v1.push_back(i);//β��
//	}
//	//at����
//	for (size_t i = 0; i < v1.size(); ++i)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	//����������
//	for (size_t i = 0; i < v1.size(); ++i)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	//�����һ��Ԫ��
//	cout << "v1��һ��Ԫ��Ϊ��" << v1.front() << endl;
//	//������һ��Ԫ��
//	cout << "v1���һ��Ԫ��Ϊ��" << v1.back() << endl;
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}