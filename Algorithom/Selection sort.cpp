#include<iostream>
using namespace std;
int n,inmin,temp;
void selection_sort(int a[],int n)
{
    for(int j=0; j<n; j++)
    {
        inmin=j;
        for(int p=j+1; p<n; p++)
        {
            if(a[p]<a[inmin])
            {
                inmin=p;
            }
        }
        if(inmin!=j)
        {
            //swap(a[j],a[inmin]);
            temp=a[j];
            a[j]=a[inmin];
            a[inmin]=temp;
        }
        cout<<a[j]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n],inmin,temp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    selection_sort(a,n);


    return 0;
}
