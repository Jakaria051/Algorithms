#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Array[100],n,i,head,sum=0;
    cout<<"Enter your num of I/O blocks..."<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>Array[i];
    }
    cout<<"Enter your Disk head...."<<endl;
    cin>>head;

    Array[0] = head;

    for(i=0;i<n;i++)
    {
        if(Array[i] < Array[i+1])
        {
            sum += (Array[i+1]-Array[i]);
        }
        else
        {
          sum += (Array[i]-Array[i+1]);
        }

        cout<<Array[i]<<" ";
    }
    cout<<Array[i]<<" "; ///last number

    cout<<endl;
    cout<<"Total Head Management: "<<sum<<endl;

/*
8
98 183 37 122 14 124 65 67
53
*/



}
