#include<iostream>
using namespace std;
int temp,p,n;
void bubble_sort(int a[],int n)
{
    for(int j=0; j<n; j++)
    {

        for( p=0; p<n-1; p++)
        {
            if(a[p]>a[p+1])
            {
                swap(a[p],a[p+1]);
                //temp=a[p];
               // a[p]=a[p+1];
               // a[p+1]=temp;
            }
        }


    }
}
void  display(int a[],int n)
{
    for(int l = 0; l < n; l++)
    {
        cout<<a[l]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    display(a,n);


    return 0;
}

