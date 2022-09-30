#include<iostream>
using namespace std;
int main()
{
    int x,i,j,mini=0,temp;
    cin>>x;
    int s1[x];
    for(i=0;i<x;i++)
    {
        cin>>s1[i];
    }
    for(i=0;i<x-1;i++)
    {
        mini=i;
        for(j=i+1;j<x;j++)
        {
            if(s1[j]<s1[mini])
            {
                mini=j;
            }
        }
        if(mini!=i)
        {
            temp=s1[i];
            s1[i]=s1[mini];
            s1[mini]=temp;
        }
    }
    for(i=0;i<x;i++)
    {
        cout<<s1[i]<<endl;
    }
    return 0;

}
