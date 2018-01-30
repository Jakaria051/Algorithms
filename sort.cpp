#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a[100];

    cout<<"How many number you want to sort:"<<endl;

    cin>>n;

    cout<<"Enter your number:"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
