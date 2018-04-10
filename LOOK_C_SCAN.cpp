#include<bits/stdc++.h>
using namespace std;

int arra[100];
vector<int>vec;
int head;
int index;
int num;


void goLeft()
{
    int i,j;
    for(i=index;i>=0;i--)
    {
        vec.push_back(arra[i]);
    }
    for(i=num-1;i>index;i--)
    {
        vec.push_back(arra[i]);
    }

}

void goRight()
{
    int i;
     for(i=index;i<num;i++)
    {
        vec.push_back(arra[i]);
    }

    for(i=0;i<index;i++)
    {
        vec.push_back(arra[i]);
    }

}


void Show_head()
{
    for(int i=0;i<num;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

void headmove()
{
    int sum=0;
     for(int i=0;i<num-1;i++)
    {

        sum+=abs(vec[i]-vec[i+1]);
    }
    cout<<sum;

    return ;
}


int main()
{
    int i,j,lo,hi,mov;
    cin>>num;
    for(i=0;i<num;i++)
        cin>>arra[i];
    cin>>head;
    arra[num]=head;
    num++;
    sort(arra,arra+num);
    cin>>lo>>hi;
    cin>>mov;
    for(j=0;j<num;j++)
    {
        if(arra[j]==head)
        {
            index=j;
            break;
        }
    }
    if(mov==0)
    {
        goLeft();
    }
    else
    {
         goRight();
    }


    Show_head();
    headmove();

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

