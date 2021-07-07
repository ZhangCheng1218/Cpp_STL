//#include<iostream>
//#include<string>
//
//using namespace std;
////string 字符串查找与替换
////查找：查找指定字符串是否存在
////替换：在指定的位置替换字符串
///*
//int find(const string& str,int pos=0)const;//查找str第一次出现位置，从pos开始查找
//int find(const char* s,int pos=0)const;//查找s第一次出现位置，从pos开始查找
//int find(const char* s,int pos=0,int n)const;//从pos位置查找s的前n个字符第一次位置
//int find(const char c,int pos=0)const;//查找字符c第一次出现位置
//int rfind(const string& str,int pos=npos)const;//查找str最后一次位置，从pos开始查找
//int rfind(const char* s,int pos=npos)const;//查找s最后一次出现位置，从pos开始查找
//int rfind(const char* s,int pos,int n)const;//从pos查找s的前n个字符最后一次位置
//int rfind(const char c,int pos=0)const;//查找字符c最后一次出现位置
//string& replace(int pos,int n,const string& str);//替换从pos开始n个字符为字符串str
//string& replace(int pos,int n,const char* s);//替换从pos开始的n个字符为字符串s
//*/
//
////查找
//void test01()
//{
//	//find是从左往右查，rfind是从右往左查，脚标还是正常从左往右计算,找不到会返回-1
//	string str1 = "woshizhangcheng";
//	int pos= str1.find("ng");
//	cout << "find-pos="<<pos << endl;
//
//	pos = str1.rfind("ng");
//	cout << "rfind-pos=" << pos << endl;
//}
////替换
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