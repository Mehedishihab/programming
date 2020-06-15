#include<bits/stdc++.h>
using namespace std;
int ternarysearch(int l,int r,int key,int a[])
{
    while(r>=l)
    {
        int mid1=l+(r-l)/3;
        int mid2=r-(r-l)/3;

        if(key==a[mid1])
        {
            return mid1;
        }
        if(key==a[mid2])
        {
            return mid2;
        }

        if(key<a[mid1])
        {
            l=mid1-1;
        }
        else if(key>a[mid2])
        {
            r=mid2+1;
        }
        else
        {
            l=mid1+1;
            r=mid2-1;
        }

    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    int l=0,r=n-1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<ternarysearch(l,r,key,a);
}
