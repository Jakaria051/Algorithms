#include<bits/stdc++.h>
using namespace std;

int arra[100];
int index;
int head;
int sum=0;
vector<int>vec;
vector<int> ::iterator it;
int lo;
int hi;
int val;
int num;


void goleft()
{

    for(int i=index;i>=0;i--)
    {
       vec.push_back(arra[i]);
    }
    vec.push_back(0);
    vec.push_back(199);
    for(int i=num-1;i>index;i--)
    {
       vec.push_back(arra[i]);
    }
}


void goright()
{

    for(int i=index;i<num;i++)
    {
       vec.push_back(arra[i]);
    }
    vec.push_back(199);
    vec.push_back(0);
    for(int i=0;i<index;i++)
    {
       vec.push_back(arra[i]);
    }
}



int main()
{
    int que,i,j,k,head,mov;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arra[i];
    }
    cin>>head;
    //cin>>lo;
    //cin>>hi;
    cin>>mov;


    arra[num] = head;
    num++;
    sort(arra,arra+num);

    for(i=0;i<num;i++)
    {
        if(arra[i]==head)
        {
            index=i;
            break;
        }
    }

   if(mov==0){
    goleft();
   }
   else{
    goright();
   }

   for(j=0;j<=num+1;j++)
    cout<<vec[j]<<" ";

  for(i=0;i<num+1;i++)
  {
      sum+=abs(vec[i]-vec[i+1]);
  }
   cout<<sum;

    return 0;
}





/*
8
14 37 65 67 98 122 124 183
53
0
199
1
*/
