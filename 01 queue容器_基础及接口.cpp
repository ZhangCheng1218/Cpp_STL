//#include<iostream>
//#include<string>
//#include<queue>
//
//using namespace std;
////���� queue
////queue��һ���Ƚ��ȳ������ݽṹ��������������
///*
//�������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��
//������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
//�����н����ݳ�Ϊ----���push
//�����г����ݳ�Ϊ----����pop
//*/
///*���ýӿ�
//���캯��
//queue<T> que;				//queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//queue(const stack&que);		//�������캯��
//��ֵ����
//queue & operator=(const queue &que);
//���ݴ�ȡ
//push(elem);					//���β�������
//pop();						//�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back();						//�������һ��Ԫ��
//front();					//���ص�һ��Ԫ��
//��С����
//empty();					//�ж϶�ջ�Ƿ�Ϊ��
//size();						//����ջ��С
//
//*/
//
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//};
//void test01()
//{
//	queue<Person> q;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	q.push(p5);
//
//	while (!q.empty())
//	{
//		cout << "��ͷ��\n������" << q.front().m_Name << "���䣺" << q.front().m_Age
//			<< "\n��β��\n������" << q.back().m_Name << "���䣺" << q.back().m_Age << endl;
//		cout << endl;
//		q.pop();
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}