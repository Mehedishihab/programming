#include<bits/stdc++.h>
using namespace std;

void mergee(int a[],int p,int q,int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;

    int L[n1],R[n2];
    for(i=0; i<n1; i++)
    {
        L[i]=a[p+i];
    }
    for(j=0; j<n2; j++)
    {
        R[j]=a[q+1+j];
    }

    i=0;
    j=0;
    k=p;

    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;

        }
        else
        {
            a[k]=R[j];
            j++;


        }
        k++;
    }

    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int a[],int p,int r)
{
    if(p<r)
    {
        int q=(r+p)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        mergee(a,p,q,r);
    }
}
void display(int A[],int s)
{
    int i;
    for(i=0; i<s; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,l=0;
    cin>>n;
    int a[n];
    for(int i=l; i<n; i++)
    {
        cin>>a[i];
    }
    display(a,n);
    mergesort(a,l,n-1);
    display(a,n);
    return 0;
}
