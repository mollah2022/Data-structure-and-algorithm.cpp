#include<iostream>
using namespace std;
int main()
{
    int i,j,x,temp;
    cin>>x;
    int s1[x];
    for(i=0;i<x;i++)
    {
        cin>>s1[i];
    }
    for(i=1;i<x;i++)
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

    for(i=0;i<x;i++)
    {
        cout<<s1[i]<<endl;
    }
    return 0;
}
