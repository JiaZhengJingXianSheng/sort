#include <iostream>
#include "fun.h"
using namespace std;


int main(int argc, char** argv) {
	
	int n = 20;
	int *a = new int[n];
	
	for (int i = 0 ; i < n ; i ++ )
	{
		a[i] = (i*3+4*7)%13;
		cout<<a[i]<<" ";
	}
	cout<< endl<<endl;
	
	//ð������
	
	cout<<"ð������Ľ��Ϊ:"<<endl; 
	bubble(a,n);
	 
	//ֱ�Ӳ�������
	cout<<"ֱ�Ӳ�������Ľ��Ϊ:"<<endl; 
	direct_insert(a,n);
	
//	��ѡ������
	cout<<"��ѡ������Ľ��Ϊ:"<<endl; 
	check(a,n);
	delete []a;
	return 0;
}
