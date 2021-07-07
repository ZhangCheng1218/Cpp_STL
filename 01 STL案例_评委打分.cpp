//#include<iostream>
//#include<string>
//#include<vector>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//
//using namespace std;
///*
//有五个选手ABCDE，十个评委分别给选手打分，去掉最高最低，求平均分
//*/
///*
//1、选手类内含选手姓名和选手最终得分
//2、用vector包含五名选手
//3、去除最高和最低，用deque作为评委打分容器
//
//*/
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_avgScore = score;
//	}
//
//	int m_avgScore;
//	string m_Name;
//};
//
//
//void printv(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << "姓名：" << (*it).m_Name << "\t"
//			<< "平局得分： " << (*it).m_avgScore << endl;
//	}
//	cout << endl;
//}
//void createP(vector<Person>& v)
//{
//	string nameS = "ABCDE";
//	for (size_t i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameS[i];
//		Person p(name, 0);
//		v.push_back(p);
//	}
//}
//void getScore(vector<Person>& v)
//{
//	
//
//	for (vector<Person>::iterator vit = v.begin(); vit != v.end(); ++vit)
//	{
//		deque<int> sco;
//		int socre = 0;
//		int sum = 0;
//		for (size_t i = 0; i < 10; ++i)
//		{
//			socre = rand() % 41 + 60;
//			cout << socre << " ";
//			sco.push_back(socre);
//		}
//		cout << endl;
//		sort(sco.begin(), sco.end());
//		sco.pop_back();
//		sco.pop_front();
//		for (deque<int>::iterator it = sco.begin(); it != sco.end(); ++it)
//		{
//			sum += (*it);
//		}
//		int age = sum / sco.size();
//		(*vit).m_avgScore = age;
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//随机数种子
//	vector<Person> v;//放入选手
//	createP(v);
//	getScore(v);
//
//	printv(v);
//	return 0;
//}