#include<bits/stdc++.h>
using namespace std;

void selection_sort(int s1[],int x)
{
    int i,j,temp=0,min=0;
    for(int i=0;i<x-1;i++)
    {
        min=i;
          for(int j=i+1;j<x;j++)
          {
             if(s1[i]<s1[min])
             {
                min=j;
             }
          }
          if(min!=i)
          {
            temp=s1[i];
            s1[i]=s1[min];
            s1[min]=temp;
          }
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

    selection_sort(s1,x);
}