#include<bits/stdc++.h>
using namespace std;
int A[100][100];
int main()
{
    int n,e,a,b;
    cin>>n>>e;

    for(int i=1; i<=e; i++)
    {
        cin>>a>>b;
        A[a][b]=1;
        A[b][a]=1;

    }

    for(int i=1; i<e; i++)
    {
        for(int j=1; j<e; j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }

    return 0;
}
