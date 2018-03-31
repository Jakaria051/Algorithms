///Shortest Job First
#include<bits/stdc++.h>
using namespace std;

struct myStructure
{
    string process;
    int bt;
};

bool cmp(myStructure a,myStructure b)
{
    if(a.bt == b.bt)
    {
        return a.process > b.process ?0:1;
    }
    else
        return a.bt > b.bt ?0:1;
}

int main()
{
    int process;
    double sum=0,avg=0;

    cin>>process;

    struct myStructure myarray[100];

    for(int i=0;i<process;i++)
    {
        cin>>myarray[i].process;
        cin>>myarray[i].bt;

    }

    sort(myarray,myarray+process,cmp);

    for(int i=0;i<process;i++)
    {
        cout<<myarray[i].process<<"\t";
    }
    cout<<endl;

    for(int i=0;i<process;i++)
    {
        avg += sum;
        cout<<sum<<"\t";
        sum += myarray[i].bt;

    }
    cout<<sum<<"\t";
    cout<<endl;
    cout<<avg/process<<endl;


}

/*
5
P1 5
P2 2
P3 9
P4 1
p5 9



4
P1 9
P2 8
P3 2
P4 6
3
P2 24
P3 3
P1 3
*/
