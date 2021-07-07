//#include<iostream>
//#include<string>
//
//using namespace std;
////string 字符串拼接
///*
//-string& operator+=(cosnt char* str);
//-string& operator+=(const string &str);
//-string& operator+=(const char c);
//-string& append(const char *s);				//把字符串s连接到当前字符串结尾
//-string& append(const char *s，int n);		//把字符串s的前n个字符连接到当前字符串结尾
//-string& append(const string &s);			//同operator+=(const string &str);
//-string& append(const string &s,int pos,int n);//字符串s中从pos开始的n个字符连接到字符串结尾
//*/
//void test01()
//{
//	string str1 = "zhang cheng";
//	str1 += " is";
//	cout << "str1=" << str1 << endl;
//	string str2;
//	str2 = " your father";
//	str1 += str2;
//	cout << "str1=" << str1 << endl;
//	str1 += ' ';
//	cout << "str1=" << str1 << endl;
//
//
//	str1.append(" 666 ");
//	cout << "str1=" << str1 << endl;
//	str1.append("duibudui",3);
//	cout << "str1=" << str1 << endl;
//
//	string str3 = " ba ";
//	str1.append(str3);
//	cout << "str1=" << str1 << endl;
//
//	string str4 = "a pei a pei a pei ";
//	str1.append(str4,0,5);
//	cout << "str1=" << str1 << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}