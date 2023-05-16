#include<bits/stdc++.h>
using namespace std;

void linear_search(int s2[],int p,int z)
{
	int found=0;
     for(int i=0;i<p;i++)
     {
     	if(s2[i]==z)
     	{
     		found=1;
     		break;
     	}
     }
     if(found==1)
     {
     	cout<<"YES\n";
     }
     else
     {
     	cout<<"NO\n";
     }
}


int32_t main()
{
	int x,y;
	cin >> x;

	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	cin >> y;
	
	linear_search(s1,x,y);
}