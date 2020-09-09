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
	
	//冒泡排序
	
	cout<<"冒泡排序的结果为:"<<endl; 
	bubble(a,n);
	 
	//直接插入排序
	cout<<"直接插入排序的结果为:"<<endl; 
	direct_insert(a,n);
	
//	简单选择排序
	cout<<"简单选择排序的结果为:"<<endl; 
	check(a,n);
	delete []a;
	return 0;
}
