//#include<iostream>
//#include<string>
//
//using namespace std;
////string 赋值操作
///*
//-string& operator=(cosnt char* s);			//char*类型字符串 赋值给当前的字符串
//-string& operator=(const string &s);		//把字符串s赋给当前的字符串
//-string& operator=(char c);					//字符赋值给当前的字符串
//-string& assign(const char *s);				//把字符串s赋值给当前的字符串
//-string& assign(const char *s，int n);		//把字符串s的前n个字符赋给当前的字符串
//-string& assign(const string &s);			//把字符串s赋给当前字符串
//-string& assign(int n,char c);				//用n个字符c赋给当前字符串
//*/
//void test01()
//{
//	string str1;
//	str1 = "zhang cheng";
//	string str2;
//	str2 = str1;
//	string str3;
//	str3 = 'c';
//	string str4;
//	str4.assign("cheng cheng");
//	string str5;
//	str5.assign("cheng cheng", 5);
//	string str6;
//	str6.assign(str5);
//	string str7;
//	str7.assign(5, 'z');
//
//	cout << "str1=" << str1
//		<< "\nstr2=" << str2
//		<< "\nstr3=" << str3
//		<< "\nstr4=" << str4
//		<< "\nstr5=" << str5
//		<< "\nstr6=" << str6
//		<< "\nstr7=" << str7 << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}