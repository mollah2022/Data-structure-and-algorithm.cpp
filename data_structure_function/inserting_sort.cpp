#include<bits/stdc++.h>
using namespace std;

void insert_sort(int s1[],int x)
{
	int i,j,temp;
	for(int i=1;i<x;i++)
	{
		temp=s1[i];
		j=i-1;
		while(j>=0 && s1[j]>temp)
		{
			s1[j+1]=s1[j];
			j--;
		}
		s1[j+1]=temp;
	}
	for(int i=0;i<x;i++)
	{
		cout<<s1[i]<<" ";
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
	insert_sort(s1,x);
}