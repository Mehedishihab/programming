#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int A[n],B[n];
    for( i=0;i<n;i++)
    {
        cin>>A[i];
        B[i]=1;
    }
    for( i=1;i<n;i++)
    {
        for( j=0;j<i;j++)
        {
            if(A[i]>A[j]&& B[j]+1>B[i])
            {
                B[i]=B[i]+1;
            }
        }
    }
    for( i=0;i<n;i++)
    { cout<<B[i];

    }

    return 0;
}
