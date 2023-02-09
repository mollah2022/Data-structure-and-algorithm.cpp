#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}
	int pos;
	cin >> pos;
	for(int i=pos;i<x;i++)
	{
		s1[i]=s1[i+1];
	}
	for(int i=0;i<x-1;i++)
	{
		cout<<s1[i]<<" ";
	}
	return 0;
}