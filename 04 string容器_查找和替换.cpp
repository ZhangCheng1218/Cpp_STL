//#include<iostream>
//#include<string>
//
//using namespace std;
////string �ַ����������滻
////���ң�����ָ���ַ����Ƿ����
////�滻����ָ����λ���滻�ַ���
///*
//int find(const string& str,int pos=0)const;//����str��һ�γ���λ�ã���pos��ʼ����
//int find(const char* s,int pos=0)const;//����s��һ�γ���λ�ã���pos��ʼ����
//int find(const char* s,int pos=0,int n)const;//��posλ�ò���s��ǰn���ַ���һ��λ��
//int find(const char c,int pos=0)const;//�����ַ�c��һ�γ���λ��
//int rfind(const string& str,int pos=npos)const;//����str���һ��λ�ã���pos��ʼ����
//int rfind(const char* s,int pos=npos)const;//����s���һ�γ���λ�ã���pos��ʼ����
//int rfind(const char* s,int pos,int n)const;//��pos����s��ǰn���ַ����һ��λ��
//int rfind(const char c,int pos=0)const;//�����ַ�c���һ�γ���λ��
//string& replace(int pos,int n,const string& str);//�滻��pos��ʼn���ַ�Ϊ�ַ���str
//string& replace(int pos,int n,const char* s);//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
//*/
//
////����
//void test01()
//{
//	//find�Ǵ������Ҳ飬rfind�Ǵ�������飬�ű껹�������������Ҽ���,�Ҳ����᷵��-1
//	string str1 = "woshizhangcheng";
//	int pos= str1.find("ng");
//	cout << "find-pos="<<pos << endl;
//
//	pos = str1.rfind("ng");
//	cout << "rfind-pos=" << pos << endl;
//}
////�滻
//void test02() 
//{
//	string str1 = "woshizhangcheng";
//	str1.replace(3,3,"666666");
//	cout << "str1=" << str1<<endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}