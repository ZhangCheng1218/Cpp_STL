//#include<iostream>
//#include<string>
//#include<vector>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//
//using namespace std;
///*
//�����ѡ��ABCDE��ʮ����ί�ֱ��ѡ�ִ�֣�ȥ�������ͣ���ƽ����
//*/
///*
//1��ѡ�����ں�ѡ��������ѡ�����յ÷�
//2����vector��������ѡ��
//3��ȥ����ߺ���ͣ���deque��Ϊ��ί�������
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
//		cout << "������" << (*it).m_Name << "\t"
//			<< "ƽ�ֵ÷֣� " << (*it).m_avgScore << endl;
//	}
//	cout << endl;
//}
//void createP(vector<Person>& v)
//{
//	string nameS = "ABCDE";
//	for (size_t i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
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
//	srand((unsigned int)time(NULL));//���������
//	vector<Person> v;//����ѡ��
//	createP(v);
//	getScore(v);
//
//	printv(v);
//	return 0;
//}