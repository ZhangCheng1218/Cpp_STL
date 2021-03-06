#include<iostream>
#include<string>
#include<vector>

using namespace std;
//vector 插入与删除
/*
push_back(ele);									//尾部插入元素ele
pop_back();										//删除最后一个元素
insert(const_iterator pos,ele);					//迭代器指向位置pos插入元素ele
insert(const_iterator pos,int count,ele);		//迭代器指向位置pos插入count个元素ele
erase(const_iterator pos);						//删除迭代器指向的元素
erase(const_iterator start,const_iterator end);	//删除迭代器从start到end之间的元素
clear();										//删除容器中所有元素
*/
void printv(vector<int>& v)
{
	for (vector<int >::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	for (size_t i = 0; i < 8; ++i)
	{
		v1.push_back(i);//尾插
	}
	printv(v1);
	//尾删
	v1.pop_back();
	printv(v1);
	//插入
	v1.insert(v1.begin(),3,99);
	printv(v1);
	//清除
	v1.erase(v1.begin(),v1.begin()+3);
	printv(v1);
}


int main()
{
	test01();
	return 0;
}