//#include<iostream>
//#include<string>
//#include<stack>
//
//using namespace std;
////stack����
////stack��һ���Ƚ���������ݽṹ����ֻ��һ������
///*
//ջ��ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ
//ջ�н������ݳ�Ϊ----��ջ-push
//ջ�е������ݳ�Ϊ----��ջ-pop
//*/
///*���ýӿ�
//���캯��
//stack<T> stk;				//stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
//stack(const stack&stk);		//�������캯��
//��ֵ����
//stack & operator=(const stack &stk);
//���ݴ�ȡ
//push(elem);					//��ջ���������
//pop();						//��ջ���Ƴ���һ��Ԫ��
//top();						//����ջԪ��
//��С����
//empty();					//�ж϶�ջ�Ƿ�Ϊ��
//size();						//����ջ��С
//
//*/
//void test01() 
//{
//	stack<int> s;
//	s.push(2);
//	s.push(22);
//	s.push(12);
//	s.push(0);
//	s.push(5);
//	cout << "ջstack�Ĵ�С��" << s.size() << endl;
//	while (!s.empty()) 
//	{
//		cout << s.top() << endl;
//		s.pop();
//	}
//	cout << "pop��ջstack�Ĵ�С��" << s.size() << endl;
//}
//int main() 
//{
//	test01();
//	return 0;
//}