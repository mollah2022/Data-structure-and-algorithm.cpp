#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int s1[],int x)
{
	int temp=0,i,j;
	for( i=0;i<x-1;i++)
	{
		for( j=i;j<x-1-i;j++)
		{
			if(s1[j]>s1[j+1])
			{
                 temp=s1[j];
                 s1[j]=s1[j+1];
                 s1[j+1]=temp;
			}
		}
	}

	for(int i=0;i<x;i++)
	{
		cout<< s1[i] <<" ";
	}
}

int32_t main()
{
	int x;
	cin >> x;

	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	 bubble_sort(s1,x); 
}