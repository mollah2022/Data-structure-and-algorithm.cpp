#include<bits/stdc++.h>
using namespace std;

bool binary_search(int s2[],int x,int y)
{
	int mid=0,left=0,right=x-1,found=0;
	while(left<=right)
	{
       mid=(left+right)/2;
       if(s2[mid]==y)
       {
          found=1;
          break;
       }
       else if(s2[mid]<y)
       {
       	  left=mid+1;
       }
       else
       {
       	 right=mid-1;
       }
	}
	if(found==1)
	{
	    return true ;
	}
	else
	{
		return false ;
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
	sort(s1,s1+x);
	int y;
	cin >> y;
	cout<<binary_search(s1,x,y)<<endl;
	return 0;
}