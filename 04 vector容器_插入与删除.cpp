//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
////vector ������ɾ��
///*
//push_back(ele);									//β������Ԫ��ele
//pop_back();										//ɾ�����һ��Ԫ��
//insert(const_iterator pos,ele);					//������ָ��λ��pos����Ԫ��ele
//insert(const_iterator pos,int count,ele);		//������ָ��λ��pos����count��Ԫ��ele
//erase(const_iterator pos);						//ɾ��������ָ���Ԫ��
//erase(const_iterator start,const_iterator end);	//ɾ����������start��end֮���Ԫ��
//clear();										//ɾ������������Ԫ��
//*/
//void printv(vector<int>& v)
//{
//	for (vector<int >::iterator it = v.begin(); it != v.end(); ++it)
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
//		v1.push_back(i);//β��
//	}
//	printv(v1);
//	//βɾ
//	v1.pop_back();
//	printv(v1);
//	//����
//	v1.insert(v1.begin(),3,99);
//	printv(v1);
//	//���
//	v1.erase(v1.begin());
//	printv(v1);
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}