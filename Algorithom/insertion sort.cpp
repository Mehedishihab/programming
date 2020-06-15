#include<bits/stdc++.h>
using namespace std;
int n,i,p,l;
void inseartion_sort(int a[],int n)
{
    for(i=1; i<n; i++)
    {
        p=a[i];
        l=i-1;
        while(l>-1&&a[l]>p)
        {
            a[l+1]=a[l];
            l--;
        }
        a[l+1]=p;

    }

}
void print(int a[],int n)
{
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,i,p,l;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    inseartion_sort(a,n);
    print(a,n);
    return 0;
}
