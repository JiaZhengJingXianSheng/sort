#include <iostream>
using namespace std;

//ð������ 
void bubble(int a[],int n)
{
	int x;
	for(int i = 0 ; i < n-1 ; i ++)
	{
		for(int j = i ; j < n ; j ++)
		{
			if (a[i]>a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	//	���
	for (int i = 0 ; i < n ; i ++)
	{
		cout<<a[i]<<" ";
	}
	cout <<endl;
}


//ֱ�Ӳ�������
void direct_insert(int a[], int n)
{
	int i , j ;
	int flag;//�ڱ�
	for(i = 1; i<n ; i++)
	{
		if(a[i]<a[i-1])
		{
			flag = a[i];
			for(j = i-1 ; a[j]>a[i] ; j--)
			{
				a[j+1] = a[j];
			}
			a[j+1] =flag;
		}
	}	
	
	for(int x = 0 ; x < n ; x ++)
	{
		cout<< a[x]<<" ";
	}
	cout<<endl;
} 


//��ѡ������ 
void check(int a[] ,int n)
{
	int min;
	int x;
	for(int i = 0 ; i < n-1 ; i ++)
	{
		min = i;
		for(int j = i+1 ; j < n ; j ++)
		{
			if (a[j]<a[min])
			{
				min = j;
			}
		}
		x = a[i];
		a[i] = a[min];
		a[min] = x;
	}
	
	for(int i = 0 ; i < n ; i ++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
} 




