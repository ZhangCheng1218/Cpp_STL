//#include<iostream>
//#include<string>
//#include<list>
//
//using namespace std;
////list����
////�����ݽ�����ʽ�洢
///*
//������һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�
//�������ɣ���������һϵ�н�����
//������ɣ�һ���Ǵ洢����Ԫ�ص���������һ���Ǵ洢��һ������ַ��ָ����
//����������������ݣ�ָ�������ڴ��ָ����һ������ָ��
//list�ŵ㣺���Զ�����λ�ý��п��ٲ����ɾ��Ԫ�ء����ö�̬�洢���䣬��������ڴ��˷Ѻ������
//listȱ�㣺���������ٶ�û������졢ռ�ÿռ�������
//list��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ������ġ�
//
//STL�е�������һ��˫��ѭ��������������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������
//
//*/
///*
//list<T> lst;
//list(beg,end);//[beg,end)
//list(n,elem);
//list(const list &lst);
//*/
//
//void printL(const list<int>&l) 
//{
//	for (list<int>::const_iterator cit=l.begin();cit!=l.end();++cit)
//	{
//		cout << (*cit) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> lst;
//	lst.push_back(5);
//	lst.push_back(15);
//	lst.push_back(25);
//	lst.push_back(35);
//	lst.push_back(45);
//
//	printL(lst);
//
//	list<int> lst2(lst.begin(),lst.end());
//	printL(lst2);
//
//	list<int> lst3(10,66);
//	printL(lst3);
//
//	list<int> lst4(lst3);
//	printL(lst4);
//}
//int main()
//{
//	test01();
//	return 0;
//}