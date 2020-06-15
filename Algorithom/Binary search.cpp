#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int a[k],p;

    for(int i=0; i<k; i++)
    {
        cin>>a[i];

    }
    cin>>p;
    int low=0;
    int high=k-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(p==a[mid])
        {
            cout<<"found";
            return 0;
        }
        else if(p>a[mid])
        {
            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
    }
    return 0;
}
