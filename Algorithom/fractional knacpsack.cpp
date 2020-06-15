#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,m,o,t,h=0;
    cin>>n;
    vector <int> d,a,b,c;
    for(int i=0;i<n;i++)
    {
        cin>>t>>l>>m;
        d.push_back(t);
        a.push_back(l);
        b.push_back(m);
        o=b[i]/a[i];
        c.push_back(o);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
           if(c[i]<c[j])
           {
               swap(c[i],c[j]);
               swap(a[i],a[j]);
               swap(b[i],b[j]);
               swap(d[i],d[j]);
           }
        }
    }

   int p;
   cin>>p;
   for(int i=0;;i++)
   {
       if(p>c[i])
       {
           h=h+(a[i]*c[i]);
           p=p-a[i];
       }
       else
       {
           h=h+a[i]*c[i];
           break;
       }
   }
   cout<<h;
    return 0;
}
