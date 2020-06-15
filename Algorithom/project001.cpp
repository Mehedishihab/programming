#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
void Boxplot();
int Decile();
int binary_search(int a[],int n);
int linear_search(int a[],int n);
void FrequencyDistribution();
int Median();
int partition(int a[],int low,int high);
void quicksort(int a[],int low,int high);
void printArray(int a[], int n);

int main()
{
    int choise,quite;
    cout<<"\n\n\t\t   ======WELCOME TO STATISTICS CALCULATOR======\n";
    cout<<"\n\n\t\t\t*********************************\n\t\t\t*\t\t\t\t*\n\t\t\t*\t     Main Menu      \t*\n\t\t\t*\t\t\t\t*\n\t\t\t*********************************\n\t\t\t*\t\t\t\t*";
    cout<<"\n\t\t\t*\t  [1]Median\t\t*\n";
    cout<<"\t\t\t*\t  [2]Frequency\t\t*\n";
    cout<<"\t\t\t*\t  [3]Boxplot\t\t*\n";
    cout<<"\t\t\t*\t  [4]Decile\t\t*\n";
    cout<<"\t\t\t*\t  [5]About Us\t\t*\n";
    cout<<"\t\t\t*\t  [0]Exit\t\t*\n\t\t\t*\t\t\t\t*\n";
    cout<<"\t\t\t*********************************\n\n";
    cout<<"\t\t\t\tChoise Any Number: ";
    cin>>choise;

    switch(choise)
    {

    case 0:
        system("CLS");
        cout<<"\n\n\n\t\t\t*********************************\n\t\t\t*\t   Are you sure?\t*\n\t\t\t*********************************\n\t\t\t*\t[1]YES   *\t[2]NO   *\n\t\t\t*********************************";
        cout<<"\n\n\t\t\tChoise Any Number: ";
        cin>>quite;
        if(quite==1)
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\t\t\t*********Thanks For Using*********\n\n\n\n\n\n\n\n\n\n\n";
            break;
        }
        else if(quite==2)
        {

            system("CLS");
            main();       // call main function
        }
        else
        {
            cout<<"\n\n\t\t\tInvalid....\n\n ";
            getch();
            system("CLS");
            main();                     //if invalid go to main menu


        }
        break;
    case 1:
        system("CLS");

        Median();
        cout<<"\n\t\t\t===========================================================";
        cout<<"\n\t\t\t\t\t(Press [1]exit or [2]menu)";
        cout<<"\n\n\t\t\t\t\tChoise Any Number: ";
        cin>>quite;
        if(quite==1)
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\t\t\t*********Thanks For Using*********\n\n\n\n\n\n\n\n\n\n\n";
            break;
        }
        else if(quite==2)
        {

            system("CLS");
            main();       // call main function
        }
        else
        {
            cout<<"\n\n\t\t\tPlease Enter Valid Option....\n\n ";
            getch();
            system("CLS");
            main();
        }

        break;
    case 2:
        system("CLS");
        FrequencyDistribution();
        cout<<"\n\t\t\t\t\t(Press [1]exit or [2]menu)";
        cout<<"\n\n\t\t\t\t\tChoise Any Number: ";
        cin>>quite;
        if(quite==1)
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\t\t\t*********Thanks For Using*********\n\n\n\n\n\n\n\n\n\n\n";
            break;
        }
        else if(quite==2)
        {

            system("CLS");
            main();       // call main function
        }
        else
        {
            cout<<"\n\n\t\t\tPlease Enter Valid Option....\n\n ";
            getch();
            system("CLS");
            main();
        }
        break;
    case 3:
        system("CLS");
        Boxplot();
        cout<<"\n\t\t\t\t\t(Press [1]exit or [2]menu)";
        cout<<"\n\n\t\t\t\t\tChoise Any Number: ";
        cin>>quite;
        if(quite==1)
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\t\t\t*********Thanks For Using*********\n\n\n\n\n\n\n\n\n\n\n";
            break;
        }
        else if(quite==2)
        {

            system("CLS");
            main();       // call main function
        }
        else
        {
            cout<<"\n\n\t\t\tPlease Enter Valid Option....\n\n ";
            getch();
            system("CLS");
            main();
        }
        break;
    case 4:
        system("CLS");
        Decile();
         cout<<"\n\t\t\t\t\t(Press [1]exit or [2]menu)";
        cout<<"\n\n\t\t\t\t\tChoise Any Number: ";
        cin>>quite;
        if(quite==1)
        {
            system("CLS");
            cout<<"\n\n\n\n\n\n\t\t\t*********Thanks For Using*********\n\n\n\n\n\n\n\n\n\n\n";
            break;
        }
        else if(quite==2)
        {

            system("CLS");
            main();       // call main function
        }
        else
        {
            cout<<"\n\n\t\t\tPlease Enter Valid Option....\n\n ";
            getch();
            system("CLS");
            main();
        }
        break;
    case 5:

        system("CLS");
        cout<<"\n\n\t\tINFORMATION ABOUT GROUP 404_NOT_FOUND\n\t===========================================================";
        cout<<"\n\t\tName:Md.Mahedi Hasan\n\t\tID:181-15-10900\n\t\tSECTION:D\n";
        cout<<"\n\t\tName:Sajib Ahmed\n\t\tID:181-15-10874\n\t\tSECTION:D\n";
        cout<<"\n\t\tName:Mohd.Mehedi Hasan Joy\n\t\tID:181-15-10632\n\t\tSECTION:D\n";
        cout<<"\n\t\tName:Akkhar Ulok\n\t\tID:181-15-11207\n\t\tSECTION:D\n";
        cout<<"\n\t\tName:Md. Anamul Kabir\n\t\tID:181-15-10714\n\t\tSECTION:D";
        cout<<"\n\n\t\t\tThis is an C++ project\n\t===========================================================";
        cout<<"\n\t\t\tPress any key to continue....";
        getch();
        system("CLS");
        main();
        break;
    default:

        cout<<"\n\t\t\tPlease Enter Valid Option....";
        cout<<"\n\t\t\tPress any key to continue....";
        getch();
        system("CLS");
        main();
        break;
    }


    return 0;
}


//==============================IMPLEMENT PARTITION==============================
int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    for(int j=low; j<=high-1; j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return (i+1);
}
//==============================IMPLEMENT QUICKSORT==============================
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int p=partition(a,low,high);

        quicksort(a,low, p- 1);
        quicksort(a, p + 1, high);
    }
}
//==============================DISPLAY==============================
void printArray(int a[], int n)
{
    int i;
    cout<<"\t\t\t\t"<<n<<" times of sorted data: ";
    for (i=1; i <=n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
//==============================MAIN FUNCTION==============================
int Median()
{
    int n;
    cout<<"\n\n\n\t\t\t\tEnter the size of data: ";
    cin>>n;
    int a[n];
    cout<<"\t\t\t\t"<<n<<" times of data: ";
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    quicksort(a,1,n);
    printArray(a, n);

//==============================IMPLEMENT MEDIAN==============================
    if(n%2==0)
    {
        double v=n;
        int M=(v/2);
        int k=(v/2)+1;
        double md=((double)a[M]+(double)a[k])/2;
        cout<<"\t\t\t\tMedian: ";
        cout<<md;

    }
    if(n%2!=0)
    {
        double v=n;
        int M=(v+1)/2;
        cout<<"\t\t\t\tMedian: ";
        cout<<(double)a[M];

    }


}



void FrequencyDistribution()
{
    int n,mx=INT_MIN;
    cout<<"Enter the number of values : ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }

    ////////Sorting Part(Counting Sort)////////
    int aux[mx];
    vector<int> b;
    for(int i=0; i<=mx; i++)
        aux[i]=0;
    for(int i=0 ; i<n; i++)
        aux[a[i]]++;
    for(int i=0; i<=mx; i++)
    {
        if(aux[i]!=0)
        {
            while(aux[i]--)
            {
                b.push_back(i);
            }
        }
    }
    //////////////SORTING PART END//////////////

    ///////////////Initial Var////////////////////////
    double numofcls=log(n)/log(2);
    numofcls=ceil(numofcls);
    double clsitvl=(b[b.size()-1]-b[0])/numofcls;
    clsitvl=ceil(clsitvl);
    int lowerlim[(int)numofcls],upperlim[(int)numofcls],frq[(int)numofcls]= {0};
    lowerlim[0]=b[0];
    upperlim[0]=b[0]+(clsitvl-1);
    for(int i=1; i<numofcls; i++)
    {
        lowerlim[i]=lowerlim[i-1]+clsitvl;
        upperlim[i]=upperlim[i-1]+clsitvl;
    }
    ////////////////Intial End//////////////////////////

    ///////////////Main Alogrithm///////////////////////
    for(int i=0; i<numofcls; i++)
    {
        for(int j=0; j<b.size(); j++)
        {
            if(b[j]>=lowerlim[i] && b[j]<=upperlim[i])
                frq[i]++;
        }
    }
    cout<<"Class Interval"<<"-------->"<<"Frequency\n";
    for(int i=0; i<numofcls; i++)
    {
        cout<<lowerlim[i]<<" - "<<upperlim[i];
        cout<<"--------------->"<<frq[i]<<"\n";
    }
    /////////////////Main Algorithm End//////////////////

}



void Boxplot()
{
    cout<<"Input Arry size"<<endl;
    int size1;
    cin>>size1;
    int A[size1];
    cout<<"Input Number"<<endl;
    for(int i=1; i<=size1; i++)
    {
        cin>>A[i];
    }
    mergesort(A,1,size1);

    int Q1,Q2,Q3,miden;
    if(size1%2!=0)
    {
        Q2=((0+size1)/2)+1;
        miden=A[Q2];
        int half=(0+(Q2-1))/2;
        Q1=(A[half]+A[half+1])/2;
        int half2=((Q2+1)+size1)/2;
        Q3=(A[half2]+A[half2+1])/2;
    }
    else
    {
        int half=(0+size1)/2;
        Q2=(A[half]+A[half+1])/2;
        miden=Q2;
        int half1=(0+half)/2;

        Q1=A[half1];

        int half2=((half+2)+size1)/2;

        Q3=A[half2];

    }
    int low=binary_search(A,size1);
    int high=linear_search(A,size1);
    int IQR=(Q3-Q1);
    int LVT=(Q1-(1.5*IQR));
    int HVT=(Q3+(1.5*IQR));

    cout<<"Q1="<<Q1<<"\n"<<"Q2="<<miden<<"\n"<<"Q3="<<Q3<<endl;
    cout<<"Low value is="<<low<<endl;
    cout<<"LVT is="<<LVT<<endl;
    cout<<"High Value is="<<high<<endl;
    cout<<"HVT="<<HVT<<endl;

}

void mergesort(int a[],int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);

    }
}
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;
    while(i<=j1&&j<=j2)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=j1)
    {
        temp[k++]=a[i++];
    }
    while(j<=j2)
    {
        temp[k++]=a[j++];
    }
    for(i=i1,j=0; i<=j2; i++,j++)
    {
        a[i]=temp[j];
    }
}
int binary_search(int a[],int n)
{
    int low=1,high=n,mid;
    int k=1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(k==mid)
        {
            k=a[mid];
            return k;
        }
        else if(k>a[mid])
        {
            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
        mid=(low+high)/2;
    }
}
int linear_search(int a[],int n)
{
    int max1=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]>max1)
        {
            max1=a[i];
        }

    }
    return max1;
}




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
{  cout<<"sorted Arry "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int Decile()
{
    int n,i,p,l;
      cout<<"Input Arry size"<<endl;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    inseartion_sort(a,n);
    print(a,n);

    double q,v=n;
    q=(2*v/10);

    int x=q;
    double w=q-x;

    double ab=a[x]-a[x-1];
    cout<<"Decile: ";
    double qr=a[x-1]+w*(ab);
    cout<<qr<<endl;
    return 0;
}

