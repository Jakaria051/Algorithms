#include<bits/stdc++.h>
using namespace std;
int array[100],i,sum=0,n,lo=0,hi=199,mov,head;
vector <int> vec;

void goleft()
{
    for(i=head;i>=0;i--)
    {
        vec.push_back(array[i]);
    }
    vec.push_back(lo);
    for(i=head+1;i<n;i++)
    {
       vec.push_back(array[i]);
    }
    vec.push_back(hi);
}

void goright()
{
    for(i=head;i<n;i++)
    {
      vec.push_back(array[i]);
    }
    vec.push_back(hi);
    for(i=head-1;i>=0;i--)
    {
     vec.push_back(array[i]);
    }
    vec.push_back(lo);
}

int main()
{
 cin>>n;
     for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cin>>head;
    cin>>mov;

    array[n] = head;
    n++;

    sort(array,array+n);

    for(i=0;i<n;i++)
    {
        if(array[i]==head)
        {
            head=i;
            break;
        }
    }
     if(mov==0){
    goleft();
   }
   else{
    goright();
   }

    for(int j=0;j<=n+1;j++)
    {
        cout<<vec[j]<<" ";
    }

    cout<<endl;

    for(i=0;i<=n+1;i++)
    {
      sum+=abs(vec[i]-vec[i+1]);
    }
    cout<<sum;
}

/*
8
98 183 37 122 14 124 65 67
53
1
*/
